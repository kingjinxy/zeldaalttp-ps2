	THUMB_FUNC_START sub_080A2F1C
sub_080A2F1C: @ 0x080A2F1C
	push {lr}
	ldr r2, _080A2F48  @ =gRam
	ldr r1, _080A2F4C  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2F8E
	ldr r1, _080A2F50  @ =0x0000172C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A2F8E
	sub r1, r1, #52
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2F54
	mov r0, #0
	b _080A2F58
	.byte 0x00
	.byte 0x00
_080A2F48:
	.4byte gRam
_080A2F4C:
	.4byte 0x000016E8
_080A2F50:
	.4byte 0x0000172C
_080A2F54:
	bl sub_080A1ADC
_080A2F58:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2F8E
	ldr r1, _080A2F7C  @ =gRam
	ldr r0, _080A2F80  @ =0x000016E8
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r3]
	ldr r0, _080A2F84  @ =0x0000177B
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A2F88
	bl sub_080A173C
	b _080A2F8E
_080A2F7C:
	.4byte gRam
_080A2F80:
	.4byte 0x000016E8
_080A2F84:
	.4byte 0x0000177B
_080A2F88:
	mov r0, #64
	bl sub_0809E43C
_080A2F8E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080A2F1C

	.byte 0x00
	.byte 0x00
