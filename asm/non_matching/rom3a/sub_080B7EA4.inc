	THUMB_FUNC_START sub_080B7EA4
sub_080B7EA4: @ 0x080B7EA4
	push {r4,lr}
	ldr r0, _080B7EDC  @ =gRam
	ldr r1, _080B7EE0  @ =0x00000BB4
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	sub r0, r0, r1
	lsl r0, r0, #5
	mov r1, #128
	lsl r1, r1, #6
	sub r4, r1, r0
	ldr r1, _080B7EE4  @ =gUnknown_0816E974
	ldr r3, _080B7EE8  @ =gUnknown_02001600
	mov r2, #159
_080B7EC2:
	ldrh r0, [r1]
	mul r0, r4, r0
	lsr r0, r0, #13
	strh r0, [r3]
	add r1, r1, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _080B7EC2
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B7EDC:
	.4byte gRam
_080B7EE0:
	.4byte 0x00000BB4
_080B7EE4:
	.4byte gUnknown_0816E974
_080B7EE8:
	.4byte gUnknown_02001600
	THUMB_FUNC_END sub_080B7EA4

