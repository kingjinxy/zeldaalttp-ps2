	THUMB_FUNC_START sub_0810673C
sub_0810673C: @ 0x0810673C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _08106780  @ =gRam
	ldr r1, _08106784  @ =0x00001032
	add r0, r4, r1
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #64
	orr r0, r0, r1
	strb r0, [r3]
	ldr r1, _08106788  @ =0x00000FC2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810677A
	sub r1, r1, #112
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _0810678C  @ =0x00001052
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #9
	strb r1, [r0]
	ldrb r1, [r3]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r3]
_0810677A:
	pop {r4}
	pop {r0}
	bx r0
_08106780:
	.4byte gRam
_08106784:
	.4byte 0x00001032
_08106788:
	.4byte 0x00000FC2
_0810678C:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810673C

