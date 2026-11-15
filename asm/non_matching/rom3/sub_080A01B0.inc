	THUMB_FUNC_START sub_080A01B0
sub_080A01B0: @ 0x080A01B0
	push {r4,lr}
	ldr r3, _080A01E4  @ =gRam
	ldr r1, _080A01E8  @ =0x00001649
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A01D2
	ldr r1, _080A01EC  @ =0x00000AA8
	add r0, r3, r1
	ldrh r0, [r0]
	mov r4, #255
	lsl r4, r4, #8
	lsr r0, r0, #8
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080A01F4
_080A01D2:
	ldr r0, _080A01F0  @ =0x0000097C
	add r2, r3, r0
	sub r0, r0, #8
	add r1, r3, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	b _080A0210
_080A01E4:
	.4byte gRam
_080A01E8:
	.4byte 0x00001649
_080A01EC:
	.4byte 0x00000AA8
_080A01F0:
	.4byte 0x0000097C
_080A01F4:
	ldr r1, _080A0218  @ =0x00001774
	add r2, r3, r1
	ldr r1, _080A021C  @ =0x00000974
	add r0, r3, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	mov r3, #0
	ldrsh r0, [r0, r3]
	and r0, r0, r4
	asr r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	orr r1, r1, r0
	strh r1, [r2]
_080A0210:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A0218:
	.4byte 0x00001774
_080A021C:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A01B0

