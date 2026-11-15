	THUMB_FUNC_START sub_080A399C
sub_080A399C: @ 0x080A399C
	push {lr}
	ldr r2, _080A39EC  @ =gRam
	ldr r1, _080A39F0  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	add r3, r2, #0
	cmp r0, #0
	bne _080A3A2C
	ldr r2, _080A39F4  @ =0x000009B2
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080A39D0
	ldr r1, _080A39F8  @ =0x00001718
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A39D0
	cmp r0, #23
	beq _080A39D0
	cmp r0, #28
	bne _080A3A90
_080A39D0:
	ldr r2, _080A39F0  @ =0x000016E8
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A39E8
	ldr r1, _080A39FC  @ =0x000016F8
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3A00
_080A39E8:
	mov r0, #0
	b _080A3A04
_080A39EC:
	.4byte gRam
_080A39F0:
	.4byte 0x000016E8
_080A39F4:
	.4byte 0x000009B2
_080A39F8:
	.4byte 0x00001718
_080A39FC:
	.4byte 0x000016F8
_080A3A00:
	bl sub_080A1ADC
_080A3A04:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A3A90
	ldr r0, _080A3A24  @ =gRam
	ldr r2, _080A3A28  @ =0x00001663
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #10
	bne _080A3A2C
	mov r0, #146
	lsl r0, r0, #1
	bl sub_080AF4FC
	b _080A3A90
	.byte 0x00
	.byte 0x00
_080A3A24:
	.4byte gRam
_080A3A28:
	.4byte 0x00001663
_080A3A2C:
	ldr r0, _080A3A70  @ =0x000016E8
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A3A74  @ =0x0000172C
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A3A68
	ldr r2, _080A3A78  @ =0x00001811
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A3A84
	ldr r1, _080A3A7C  @ =0x000009B2
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080A3A84
	ldr r2, _080A3A80  @ =0x000009C6
	add r0, r3, r2
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A3A84
_080A3A68:
	mov r0, #64
	bl sub_0809E43C
	b _080A3A90
_080A3A70:
	.4byte 0x000016E8
_080A3A74:
	.4byte 0x0000172C
_080A3A78:
	.4byte 0x00001811
_080A3A7C:
	.4byte 0x000009B2
_080A3A80:
	.4byte 0x000009C6
_080A3A84:
	mov r0, #19
	mov r1, #1
	bl sub_080BEA28
	bl sub_080A3A94
_080A3A90:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080A399C

