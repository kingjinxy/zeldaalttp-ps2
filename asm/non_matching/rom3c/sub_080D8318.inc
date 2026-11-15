	THUMB_FUNC_START sub_080D8318
sub_080D8318: @ 0x080D8318
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D8350  @ =gRam
	ldr r1, _080D8354  @ =0x00000F62
	add r4, r2, r1
	add r4, r0, r4
	ldr r5, _080D8358  @ =gUnknown_08175724
	ldr r3, _080D835C  @ =0x00000996
	add r1, r2, r3
	ldrb r3, [r1]
	mov r1, #4
	and r1, r1, r3
	lsl r1, r1, #24
	lsr r1, r1, #26
	ldr r3, _080D8360  @ =0x00000FB2
	add r2, r2, r3
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	orr r1, r1, r0
	add r1, r1, r5
	ldrb r0, [r1]
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D8350:
	.4byte gRam
_080D8354:
	.4byte 0x00000F62
_080D8358:
	.4byte gUnknown_08175724
_080D835C:
	.4byte 0x00000996
_080D8360:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080D8318

