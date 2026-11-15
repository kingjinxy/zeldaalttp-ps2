	THUMB_FUNC_START sub_080A2AD4
sub_080A2AD4: @ 0x080A2AD4
	push {lr}
	ldr r2, _080A2B00  @ =gRam
	ldr r1, _080A2B04  @ =0x0000172C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A2B6A
	ldr r3, _080A2B08  @ =0x000016E8
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2AFA
	ldr r1, _080A2B0C  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2B10
_080A2AFA:
	mov r0, #0
	b _080A2B14
	.byte 0x00
	.byte 0x00
_080A2B00:
	.4byte gRam
_080A2B04:
	.4byte 0x0000172C
_080A2B08:
	.4byte 0x000016E8
_080A2B0C:
	.4byte 0x000016F8
_080A2B10:
	bl sub_080A1ADC
_080A2B14:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2B6A
	ldr r0, _080A2B70  @ =gLamp
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2B4E
	mov r0, #6
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2B4E
	mov r0, #0
	mov r1, #26
	bl sub_08117E50
	bl sub_0808A4CC
	bl sub_080864CC
	mov r0, #2
	mov r1, #47
	bl sub_080AC5F4
	mov r0, #10
	mov r1, #1
	bl sub_080BEA28
_080A2B4E:
	ldr r1, _080A2B74  @ =gRam
	ldr r2, _080A2B78  @ =0x0000178A
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _080A2B7C  @ =0x000016E8
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080A2B80  @ =0x00001705
	add r1, r1, r0
	strb r2, [r1]
_080A2B6A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A2B70:
	.4byte gLamp
_080A2B74:
	.4byte gRam
_080A2B78:
	.4byte 0x0000178A
_080A2B7C:
	.4byte 0x000016E8
_080A2B80:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A2AD4

