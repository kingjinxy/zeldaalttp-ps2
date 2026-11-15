	THUMB_FUNC_START sub_080D2CE8
sub_080D2CE8: @ 0x080D2CE8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D2DCE
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D2DCE
	bl sub_0809E3CC
	cmp r0, #0
	bne _080D2DCE
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080D2DBC
	ldr r5, _080D2D98  @ =gRam
	ldr r1, _080D2D9C  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D2DCE
	ldr r2, _080D2DA0  @ =0x0000188F
	add r0, r5, r2
	strb r6, [r0]
	ldr r1, _080D2DA4  @ =0x00001791
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080D2DCE
	add r0, r4, #0
	mov r1, #109
	bl sub_080CF0AC
	bl sub_0808F1C4
	add r0, r4, #0
	bl sub_080F4CB8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D2DA8  @ =0x00000EE2
	add r1, r5, r2
	add r2, r0, r1
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _080D2DAC  @ =0x00000F02
	add r1, r5, r2
	add r2, r0, r1
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _080D2DB0  @ =0x00000ED2
	add r1, r5, r2
	add r2, r0, r1
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _080D2DB4  @ =0x00000EF2
	add r1, r5, r2
	add r0, r0, r1
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D2DB8  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	b _080D2DCE
_080D2D98:
	.4byte gRam
_080D2D9C:
	.4byte 0x00000F62
_080D2DA0:
	.4byte 0x0000188F
_080D2DA4:
	.4byte 0x00001791
_080D2DA8:
	.4byte 0x00000EE2
_080D2DAC:
	.4byte 0x00000F02
_080D2DB0:
	.4byte 0x00000ED2
_080D2DB4:
	.4byte 0x00000EF2
_080D2DB8:
	.4byte 0x00000FA2
_080D2DBC:
	ldr r0, _080D2DD8  @ =gRam
	ldr r2, _080D2DDC  @ =0x0000188F
	add r1, r0, r2
	mov r2, #1
	strb r2, [r1]
	ldr r1, _080D2DE0  @ =0x00000F62
	add r0, r0, r1
	add r0, r5, r0
	strb r2, [r0]
_080D2DCE:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2DD8:
	.4byte gRam
_080D2DDC:
	.4byte 0x0000188F
_080D2DE0:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D2CE8

