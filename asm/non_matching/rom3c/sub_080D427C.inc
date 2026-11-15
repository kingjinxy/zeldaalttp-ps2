	THUMB_FUNC_START sub_080D427C
sub_080D427C: @ 0x080D427C
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080D42C0  @ =gUnknown_08174ED4
	ldr r5, _080D42C4  @ =gRam
	ldr r2, _080D42C8  @ =0x00000F62
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	neg r0, r0
	bl sub_080AA83C
	ldr r1, _080D42CC  @ =0x00000F52
	add r0, r5, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r4]
	ldr r1, _080D42D0  @ =gHeartsFiller
	mov r0, #160
	strb r0, [r1]
	ldr r0, _080D42D4  @ =0x00001770
	add r5, r5, r0
	strb r2, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D42C0:
	.4byte gUnknown_08174ED4
_080D42C4:
	.4byte gRam
_080D42C8:
	.4byte 0x00000F62
_080D42CC:
	.4byte 0x00000F52
_080D42D0:
	.4byte gHeartsFiller
_080D42D4:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D427C

