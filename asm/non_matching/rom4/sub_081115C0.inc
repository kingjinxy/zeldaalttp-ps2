	THUMB_FUNC_START sub_081115C0
sub_081115C0: @ 0x081115C0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r7, _08111608  @ =gRam
	ldr r0, _0811160C  @ =0x000016B5
	add r5, r7, r0
	ldrb r0, [r5]
	cmp r0, #7
	bls _081115DC
	add r0, r4, #0
	mov r1, #2
	bl sub_08111614
_081115DC:
	ldrb r0, [r5]
	cmp r0, #4
	bls _081115EA
	add r0, r4, #0
	mov r1, #1
	bl sub_08111614
_081115EA:
	ldrb r0, [r5]
	cmp r0, #1
	bls _081115F8
	add r0, r4, #0
	mov r1, #0
	bl sub_08111614
_081115F8:
	ldr r1, _08111610  @ =0x00000FA2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_08111608:
	.4byte gRam
_0811160C:
	.4byte 0x000016B5
_08111610:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_081115C0

