	THUMB_FUNC_START sub_080D2774
sub_080D2774: @ 0x080D2774
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080D27AC  @ =gRam
	ldr r1, _080D27B0  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080D27A4
	bl sub_08133620
	ldr r1, _080D27B4  @ =0x00000CF8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080D27A4
	ldr r0, _080D27B8  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D27A4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D27AC:
	.4byte gRam
_080D27B0:
	.4byte 0x00000996
_080D27B4:
	.4byte 0x00000CF8
_080D27B8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D2774

