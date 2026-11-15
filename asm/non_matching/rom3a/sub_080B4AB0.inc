	THUMB_FUNC_START sub_080B4AB0
sub_080B4AB0: @ 0x080B4AB0
	push {r4-r6,lr}
	ldr r2, _080B4AF4  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	ldr r6, _080B4AF8  @ =gUnknown_0816F000
	add r4, r1, #0
	ldr r0, _080B4AFC  @ =0x0000096C
	add r5, r2, r0
_080B4AC6:
	mov r2, #0
	ldrsh r1, [r4, r2]
	lsl r1, r1, #1
	add r1, r1, r6
	mov r2, #0
	ldrsh r0, [r5, r2]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r1, _080B4B00  @ =0x000007FF
	and r0, r0, r1
	bl sub_080B4654
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #5
	bne _080B4AC6
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B4AF4:
	.4byte gRam
_080B4AF8:
	.4byte gUnknown_0816F000
_080B4AFC:
	.4byte 0x0000096C
_080B4B00:
	.4byte 0x000007FF
	THUMB_FUNC_END sub_080B4AB0

