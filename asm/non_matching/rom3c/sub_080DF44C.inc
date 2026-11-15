	THUMB_FUNC_START sub_080DF44C
sub_080DF44C: @ 0x080DF44C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080DF4A0  @ =gRam
	ldr r0, _080DF4A4  @ =0x00000F62
	add r7, r6, r0
	add r0, r4, r7
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DF4B4
	ldr r1, _080DF4A8  @ =0x00000F82
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080DF484
	ldr r3, _080DF4AC  @ =0x00000FA2
	add r0, r6, r3
	add r0, r4, r0
	strb r1, [r0]
_080DF484:
	ldr r0, _080DF4B0  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r2]
	lsr r0, r0, #3
	strb r0, [r1]
	mov r0, #4
	bl sub_080CF3A0
	add r0, r4, #0
	bl sub_080C58F0
	b _080DF632
	.byte 0x00
	.byte 0x00
_080DF4A0:
	.4byte gRam
_080DF4A4:
	.4byte 0x00000F62
_080DF4A8:
	.4byte 0x00000F82
_080DF4AC:
	.4byte 0x00000FA2
_080DF4B0:
	.4byte 0x00000F92
_080DF4B4:
	ldr r1, _080DF58C  @ =0x00000F72
	add r1, r1, r6
	mov r8, r1
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DF4C4
	b _080DF5C8
_080DF4C4:
	add r0, r4, #0
	bl sub_080E0254
	ldr r3, _080DF590  @ =0x00000F92
	add r2, r6, r3
	add r2, r4, r2
	ldr r0, _080DF594  @ =0x00000996
	add r3, r6, r0
	ldrb r0, [r3]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r3]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080DF4EA
	b _080DF632
_080DF4EA:
	mov r0, #114
	add r1, r4, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	bge _080DF4FA
	b _080DF632
_080DF4FA:
	bl GetRandomInt
	mov r3, #7
	and r3, r3, r0
	mov r1, #150
	lsl r1, r1, #4
	add r2, r6, r1
	ldr r0, _080DF598  @ =gUnknown_081765BC
	add r0, r3, r0
	ldrh r1, [r2]
	ldrb r0, [r0]
	add r1, r1, r0
	mov r4, #0
	strh r1, [r2]
	ldr r1, _080DF59C  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _080DF5A0  @ =0x00000F02
	add r0, r6, r2
	add r0, r5, r0
	ldr r2, _080DF5A4  @ =0x00000961
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DF5A8  @ =0x00000964
	add r1, r6, r0
	ldr r0, _080DF5AC  @ =gUnknown_081765C4
	add r3, r3, r0
	ldrh r0, [r1]
	ldrb r3, [r3]
	add r0, r0, r3
	strh r0, [r1]
	ldr r2, _080DF5B0  @ =0x00000ED2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080DF5B4  @ =0x00000EF2
	add r0, r6, r3
	add r0, r5, r0
	ldr r2, _080DF5B8  @ =0x00000965
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #144
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #31
	strb r1, [r0]
	add r0, r5, r7
	strb r1, [r0]
	ldr r1, _080DF5BC  @ =0x00001012
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r2, _080DF5C0  @ =0x00001032
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #72
	strb r1, [r0]
	ldr r3, _080DF5C4  @ =0x00001122
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #8
	strb r1, [r0]
	mov r0, r8
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	b _080DF632
	.byte 0x00
	.byte 0x00
_080DF58C:
	.4byte 0x00000F72
_080DF590:
	.4byte 0x00000F92
_080DF594:
	.4byte 0x00000996
_080DF598:
	.4byte gUnknown_081765BC
_080DF59C:
	.4byte 0x00000EE2
_080DF5A0:
	.4byte 0x00000F02
_080DF5A4:
	.4byte 0x00000961
_080DF5A8:
	.4byte 0x00000964
_080DF5AC:
	.4byte gUnknown_081765C4
_080DF5B0:
	.4byte 0x00000ED2
_080DF5B4:
	.4byte 0x00000EF2
_080DF5B8:
	.4byte 0x00000965
_080DF5BC:
	.4byte 0x00001012
_080DF5C0:
	.4byte 0x00001032
_080DF5C4:
	.4byte 0x00001122
_080DF5C8:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C631C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DF632
	add r0, r4, #0
	bl sub_080DF648
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DF632
	ldr r1, _080DF610  @ =0x000009DA
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #21
	bne _080DF61C
	ldr r1, _080DF614  @ =gUnknown_081765CC
	ldr r2, _080DF618  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080DF632
	.byte 0x00
	.byte 0x00
_080DF610:
	.4byte 0x000009DA
_080DF614:
	.4byte gUnknown_081765CC
_080DF618:
	.4byte 0x00000F52
_080DF61C:
	ldr r1, _080DF640  @ =gUnknown_08176608
	ldr r3, _080DF644  @ =0x00000F52
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080DF632:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF640:
	.4byte gUnknown_08176608
_080DF644:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DF44C

