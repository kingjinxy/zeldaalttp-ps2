	THUMB_FUNC_START sub_080C3ED0
sub_080C3ED0: @ 0x080C3ED0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	ldr r1, _080C3EF4  @ =gRam
	ldr r0, _080C3EF8  @ =0x000015ED
	add r5, r1, r0
	ldrb r0, [r5]
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r1, #0
	cmp r2, #128
	bne _080C3F00
	ldr r1, _080C3EFC  @ =0x00000974
	add r0, r4, r1
	strb r2, [r0]
	b _080C3FB8
	.byte 0x00
	.byte 0x00
_080C3EF4:
	.4byte gRam
_080C3EF8:
	.4byte 0x000015ED
_080C3EFC:
	.4byte 0x00000974
_080C3F00:
	mov r2, #0
	cmp r0, #0
	bge _080C3F08
	mov r2, #255
_080C3F08:
	ldrb r1, [r5]
	ldr r5, _080C3F80  @ =0x00000EE2
	add r0, r4, r5
	add r0, r3, r0
	ldrb r0, [r0]
	add r1, r1, r0
	add r5, r5, #32
	add r0, r4, r5
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r2, #8
	add r1, r1, r0
	ldr r2, _080C3F84  @ =0x00000968
	add r0, r4, r2
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r3, _080C3F88  @ =0x00000974
	add r0, r4, r3
	strb r1, [r0]
	mov r2, #0
	ldr r5, _080C3F8C  @ =0x000015EC
	add r1, r4, r5
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080C3F42
	mov r2, #255
_080C3F42:
	ldrb r1, [r1]
	ldr r3, _080C3F90  @ =0x00000ED2
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r5, _080C3F94  @ =0x00000EF2
	add r0, r4, r5
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r2, #8
	add r1, r1, r0
	ldr r2, _080C3F98  @ =0x00000969
	add r0, r4, r2
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r3, _080C3F9C  @ =0x00000975
	add r0, r4, r3
	strb r1, [r0]
	mov r1, #3
	ldr r5, _080C3FA0  @ =0x00000FF2
	add r0, r4, r5
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #106
	beq _080C3FA4
	cmp r0, #246
	beq _080C3FA8
	b _080C3FAC
_080C3F80:
	.4byte 0x00000EE2
_080C3F84:
	.4byte 0x00000968
_080C3F88:
	.4byte 0x00000974
_080C3F8C:
	.4byte 0x000015EC
_080C3F90:
	.4byte 0x00000ED2
_080C3F94:
	.4byte 0x00000EF2
_080C3F98:
	.4byte 0x00000969
_080C3F9C:
	.4byte 0x00000975
_080C3FA0:
	.4byte 0x00000FF2
_080C3FA4:
	mov r1, #16
	b _080C3FAC
_080C3FA8:
	ldr r0, _080C3FC0  @ =gUnknown_02010991
	ldrb r1, [r0]
_080C3FAC:
	ldr r2, _080C3FC4  @ =0x0000096C
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080C3FC8  @ =0x0000096D
	add r0, r4, r3
	strb r1, [r0]
_080C3FB8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C3FC0:
	.4byte gUnknown_02010991
_080C3FC4:
	.4byte 0x0000096C
_080C3FC8:
	.4byte 0x0000096D
	THUMB_FUNC_END sub_080C3ED0

