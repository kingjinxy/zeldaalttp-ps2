	THUMB_FUNC_START sub_08113FF4
sub_08113FF4: @ 0x08113FF4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r5, _0811403C  @ =gRam
	ldr r1, _08114040  @ =0x00001142
	add r0, r5, r1
	add r6, r4, r0
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _08114044  @ =0x00001152
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	add r0, r2, #0
	sub r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08114026
	add r0, r2, #2
	strb r0, [r3]
_08114026:
	ldrb r0, [r6]
	cmp r0, #223
	bls _08114036
	ldr r1, _08114048  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_08114036:
	pop {r4-r6}
	pop {r0}
	bx r0
_0811403C:
	.4byte gRam
_08114040:
	.4byte 0x00001142
_08114044:
	.4byte 0x00001152
_08114048:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_08113FF4

