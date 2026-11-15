	THUMB_FUNC_START sub_080F4D24
sub_080F4D24: @ 0x080F4D24
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080F5164
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080F4D98
	ldr r7, _080F4DA4  @ =gRam
	ldr r0, _080F4DA8  @ =0x0000180C
	add r2, r7, r0
	ldrb r1, [r2]
	mov r0, #223
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080F4DAC  @ =0x00000F62
	add r0, r7, r1
	add r5, r4, r0
	strb r6, [r5]
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F4D7A
	bl sub_080AF16C
	ldr r2, _080F4DB0  @ =0x00001719
	add r0, r7, r2
	strb r6, [r0]
	bl sub_0809945C
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080F4D7A:
	bl sub_0809E3CC
	cmp r0, #0
	bne _080F4D98
	ldr r1, _080F4DB4  @ =gUnknown_081797B8
	ldr r2, _080F4DB8  @ =0x00000F52
	add r0, r7, r2
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, r8
	bl _call_via_r1
_080F4D98:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4DA4:
	.4byte gRam
_080F4DA8:
	.4byte 0x0000180C
_080F4DAC:
	.4byte 0x00000F62
_080F4DB0:
	.4byte 0x00001719
_080F4DB4:
	.4byte gUnknown_081797B8
_080F4DB8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F4D24

