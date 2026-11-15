	THUMB_FUNC_START sub_080A797C
sub_080A797C: @ 0x080A797C
	push {r4-r6,lr}
	ldr r5, _080A7A10  @ =gUnknown_0200B1A2
	ldr r6, _080A7A14  @ =gRam
	ldr r0, _080A7A18  @ =0x00000A54
	add r4, r6, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A7A08
	ldr r0, _080A7A1C  @ =gMaxHealth
	ldrb r1, [r0]
	mov r0, #248
	and r0, r0, r1
	lsl r0, r0, #14
	ldr r1, _080A7A20  @ =0xFFFE0000
	add r0, r0, r1
	lsr r3, r0, #16
	cmp r3, #19
	bls _080A79B0
	add r0, r3, #0
	sub r0, r0, #20
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r5, r5, #64
_080A79B0:
	ldr r1, _080A7A24  @ =gUnknown_0816B874
	ldr r0, _080A7A28  @ =0x00000A55
	add r2, r6, r0
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4]
	add r3, r3, r5
	ldr r1, _080A7A2C  @ =gUnknown_0816B878
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	cmp r0, #0
	bne _080A7A08
	ldr r0, _080A7A30  @ =0x00000A68
	add r1, r6, r0
	mov r4, #0
	mov r0, #64
	strh r0, [r1]
	ldr r0, _080A7A34  @ =0x00000954
	add r1, r6, r0
	mov r0, #8
	strh r0, [r1]
	ldr r0, _080A7A38  @ =0x0000095A
	add r1, r6, r0
	mov r0, #4
	strh r0, [r1]
	ldr r0, _080A7A3C  @ =gUnknown_0816B65C
	ldr r1, _080A7A40  @ =gUnknown_0200B180
	mov r2, #96
	bl CpuFastSet
	bl sub_080AA8BC
	ldr r1, _080A7A44  @ =0x00000A56
	add r0, r6, r1
	strb r4, [r0]
_080A7A08:
	mov r0, #0
	pop {r4-r6}
	pop {r1}
	bx r1
_080A7A10:
	.4byte gUnknown_0200B1A2
_080A7A14:
	.4byte gRam
_080A7A18:
	.4byte 0x00000A54
_080A7A1C:
	.4byte gMaxHealth
_080A7A20:
	.4byte 0xFFFE0000
_080A7A24:
	.4byte gUnknown_0816B874
_080A7A28:
	.4byte 0x00000A55
_080A7A2C:
	.4byte gUnknown_0816B878
_080A7A30:
	.4byte 0x00000A68
_080A7A34:
	.4byte 0x00000954
_080A7A38:
	.4byte 0x0000095A
_080A7A3C:
	.4byte gUnknown_0816B65C
_080A7A40:
	.4byte gUnknown_0200B180
_080A7A44:
	.4byte 0x00000A56
	THUMB_FUNC_END sub_080A797C

