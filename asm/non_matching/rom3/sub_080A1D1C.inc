	THUMB_FUNC_START sub_080A1D1C
sub_080A1D1C: @ 0x080A1D1C
	push {r4,lr}
	sub sp, sp, #4
	ldr r2, _080A1D4C  @ =gRam
	ldr r1, _080A1D50  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A1D96
	ldr r3, _080A1D54  @ =0x0000172C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1D3C
	b _080A1EF8
_080A1D3C:
	ldr r1, _080A1D58  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1D5C
	mov r0, #0
	b _080A1D60
	.byte 0x00
	.byte 0x00
_080A1D4C:
	.4byte gRam
_080A1D50:
	.4byte 0x000016E8
_080A1D54:
	.4byte 0x0000172C
_080A1D58:
	.4byte 0x000016F8
_080A1D5C:
	bl sub_080A1ADC
_080A1D60:
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A1D68
	b _080A1EF8
_080A1D68:
	ldr r1, _080A1E6C  @ =gRam
	ldr r2, _080A1E70  @ =0x00001705
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #1
	mov r4, #0
	orr r0, r0, r2
	strb r0, [r3]
	ldr r0, _080A1E74  @ =gUnknown_08169084
	ldrb r2, [r0]
	ldr r3, _080A1E78  @ =0x000016EB
	add r0, r1, r3
	strb r2, [r0]
	ldr r2, _080A1E7C  @ =0x000016D4
	add r0, r1, r2
	strb r4, [r0]
	add r3, r3, #158
	add r0, r1, r3
	strb r4, [r0]
	ldr r0, _080A1E80  @ =0x0000178A
	add r1, r1, r0
	mov r0, #16
	strb r0, [r1]
_080A1D96:
	bl sub_080A38AC
	ldr r4, _080A1E6C  @ =gRam
	ldr r1, _080A1E84  @ =0x00001727
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080A1E78  @ =0x000016EB
	add r3, r4, r2
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080A1DBA
	b _080A1EF8
_080A1DBA:
	ldr r1, _080A1E88  @ =0x00001789
	add r0, r4, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r2, _080A1E74  @ =gUnknown_08169084
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #3
	beq _080A1DD8
	b _080A1EF8
_080A1DD8:
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrb r1, [r0]
	ldr r3, _080A1E8C  @ =0x00001732
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080A1E90  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #115
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #110
	add r0, r4, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #16
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, sp
	strb r1, [r0]
	mov r1, #2
	mov r2, #9
	bl sub_080AD3CC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A1EB6
	ldr r0, _080A1E94  @ =0x00000DB5
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A1E38
	sub r0, r0, #1
	strb r0, [r1]
	ldr r1, _080A1E98  @ =gArrowCount
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
_080A1E38:
	ldr r1, _080A1E9C  @ =0x00000DB6
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A1EA0
	ldr r4, _080A1E98  @ =gArrowCount
	ldrb r0, [r4]
	cmp r0, #0
	beq _080A1EA0
	mov r0, #27
	bl sub_0809E43C
	mov r0, #0
	mov r1, #1
	bl sub_080BEA28
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A1EB6
	bl sub_080AA724
	b _080A1EB6
	.byte 0x00
	.byte 0x00
_080A1E6C:
	.4byte gRam
_080A1E70:
	.4byte 0x00001705
_080A1E74:
	.4byte gUnknown_08169084
_080A1E78:
	.4byte 0x000016EB
_080A1E7C:
	.4byte 0x000016D4
_080A1E80:
	.4byte 0x0000178A
_080A1E84:
	.4byte 0x00001727
_080A1E88:
	.4byte 0x00001789
_080A1E8C:
	.4byte 0x00001732
_080A1E90:
	.4byte 0x000016C1
_080A1E94:
	.4byte 0x00000DB5
_080A1E98:
	.4byte gArrowCount
_080A1E9C:
	.4byte 0x00000DB6
_080A1EA0:
	ldr r0, _080A1F00  @ =gRam
	mov r1, sp
	ldr r2, _080A1F04  @ =0x00000E15
	add r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	mov r0, #64
	bl sub_0809E43C
_080A1EB6:
	ldr r3, _080A1F00  @ =gRam
	ldr r1, _080A1F08  @ =0x00001789
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080A1F0C  @ =0x000016EB
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _080A1F10  @ =0x000016E8
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A1F14  @ =0x00001705
	add r2, r3, r1
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080A1F18  @ =0x0000178A
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #239
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A1F1C  @ =0x000016EA
	add r3, r3, r1
	ldrb r0, [r3]
	cmp r0, #8
	bls _080A1EF8
	mov r0, #9
	strb r0, [r3]
_080A1EF8:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080A1F00:
	.4byte gRam
_080A1F04:
	.4byte 0x00000E15
_080A1F08:
	.4byte 0x00001789
_080A1F0C:
	.4byte 0x000016EB
_080A1F10:
	.4byte 0x000016E8
_080A1F14:
	.4byte 0x00001705
_080A1F18:
	.4byte 0x0000178A
_080A1F1C:
	.4byte 0x000016EA
	THUMB_FUNC_END sub_080A1D1C

