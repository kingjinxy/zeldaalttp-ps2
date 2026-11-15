	THUMB_FUNC_START sub_080A1ADC
sub_080A1ADC: @ 0x080A1ADC
	push {lr}
	ldr r0, _080A1B04  @ =gUnknown_03003E70
	ldrb r0, [r0]
	cmp r0, #1
	beq _080A1B00
	ldr r2, _080A1B08  @ =gRam
	ldr r1, _080A1B0C  @ =0x00001649
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A1B00
	ldr r1, _080A1B10  @ =0x00000547
	add r0, r2, r1
	ldrb r0, [r0]
	mov r3, #64
	and r3, r3, r0
	cmp r3, #0
	bne _080A1B14
_080A1B00:
	mov r0, #0
	b _080A1B22
_080A1B04:
	.4byte gUnknown_03003E70
_080A1B08:
	.4byte gRam
_080A1B0C:
	.4byte 0x00001649
_080A1B10:
	.4byte 0x00000547
_080A1B14:
	ldr r0, _080A1B28  @ =0x000016E8
	add r2, r2, r0
	ldrb r1, [r2]
	add r0, r3, #0
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #1
_080A1B22:
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080A1B28:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_080A1ADC

