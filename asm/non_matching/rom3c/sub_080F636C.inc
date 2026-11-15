	THUMB_FUNC_START sub_080F636C
sub_080F636C: @ 0x080F636C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r4, _080F6444  @ =gRam
	ldr r1, _080F6448  @ =0x00001062
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F6384
	b _080F658C
_080F6384:
	mov r0, #4
	bl sub_080CF388
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _080F63A0
	b _080F65F0
_080F63A0:
	add r0, r5, #0
	bl sub_080C5044
	ldr r2, _080F644C  @ =0x00000F52
	add r0, r4, r2
	add r6, r5, r0
	ldrb r1, [r6]
	cmp r1, #0
	bne _080F63B4
	b _080F6560
_080F63B4:
	add r2, r2, #112
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080F63C6
	b _080F6504
_080F63C6:
	cmp r1, #1
	beq _080F6474
	ldr r1, _080F6450  @ =0x00000FD2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F63D8
	b _080F65F0
_080F63D8:
	ldr r2, _080F6454  @ =0x00000F22
	add r1, r4, r2
	add r1, r5, r1
	ldr r3, _080F6458  @ =gUnknown_081799E8
	ldr r0, _080F645C  @ =0x00000FB2
	add r2, r4, r0
	add r2, r5, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F6460  @ =0x00000F12
	add r1, r4, r0
	add r1, r5, r1
	ldr r3, _080F6464  @ =gUnknown_081799EC
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	ldr r2, _080F6468  @ =0x00000EE2
	add r1, r4, r2
	add r1, r5, r1
	add r2, r2, #128
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080F641A
	b _080F65F0
_080F641A:
	ldr r1, _080F646C  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	add r2, r2, #16
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _080F6430
	b _080F65F0
_080F6430:
	ldr r1, _080F6470  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	strb r7, [r0]
	add r0, r5, #0
	mov r1, #2
	bl sub_080F6628
	b _080F65F0
	.byte 0x00
	.byte 0x00
_080F6444:
	.4byte gRam
_080F6448:
	.4byte 0x00001062
_080F644C:
	.4byte 0x00000F52
_080F6450:
	.4byte 0x00000FD2
_080F6454:
	.4byte 0x00000F22
_080F6458:
	.4byte gUnknown_081799E8
_080F645C:
	.4byte 0x00000FB2
_080F6460:
	.4byte 0x00000F12
_080F6464:
	.4byte gUnknown_081799EC
_080F6468:
	.4byte 0x00000EE2
_080F646C:
	.4byte 0x00000ED2
_080F6470:
	.4byte 0x00000FA2
_080F6474:
	ldr r2, _080F64E8  @ =0x00000FB2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	sub r2, r2, #144
	add r0, r4, r2
	add r3, r5, r0
	ldr r0, _080F64EC  @ =gUnknown_081799F0
	add r0, r1, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _080F6498
	ldr r0, _080F64F0  @ =gUnknown_081799F8
	add r0, r1, r0
	ldrb r0, [r0]
	add r0, r2, r0
	strb r0, [r3]
_080F6498:
	ldr r2, _080F64F4  @ =0x00000F12
	add r0, r4, r2
	add r3, r5, r0
	ldr r0, _080F64F8  @ =gUnknown_081799F4
	add r0, r1, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _080F64B4
	ldr r0, _080F64FC  @ =gUnknown_081799FC
	add r0, r1, r0
	ldrb r0, [r0]
	add r0, r2, r0
	strb r0, [r3]
_080F64B4:
	add r0, r5, #0
	bl Sprite3_Move
	ldr r1, _080F6500  @ =0x00000FD2
	add r0, r4, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080F64C8
	b _080F65F0
_080F64C8:
	add r0, r5, #0
	bl sub_080C1F70
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F64DC
	b _080F65F0
_080F64DC:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #64
	strb r0, [r4]
	b _080F65F0
_080F64E8:
	.4byte 0x00000FB2
_080F64EC:
	.4byte gUnknown_081799F0
_080F64F0:
	.4byte gUnknown_081799F8
_080F64F4:
	.4byte 0x00000F12
_080F64F8:
	.4byte gUnknown_081799F4
_080F64FC:
	.4byte gUnknown_081799FC
_080F6500:
	.4byte 0x00000FD2
_080F6504:
	cmp r2, #1
	beq _080F6530
	lsr r1, r0, #25
	mov r0, #1
	and r1, r1, r0
	ldr r2, _080F6528  @ =0x00000F22
	add r4, r4, r2
	add r4, r5, r4
	ldr r0, _080F652C  @ =gUnknown_08179A00
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r4]
	add r0, r5, #0
	bl Sprite3_MoveHoriz
	strb r7, [r4]
	b _080F65F0
	.byte 0x00
	.byte 0x00
_080F6528:
	.4byte 0x00000F22
_080F652C:
	.4byte gUnknown_08179A00
_080F6530:
	ldr r0, _080F6554  @ =0x00000EE2
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080F6558  @ =0x00000F62
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F655C  @ =0x00000ED2
	add r1, r4, r0
	add r1, r5, r1
	add r2, r2, #16
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	b _080F65F0
	.byte 0x00
	.byte 0x00
_080F6554:
	.4byte 0x00000EE2
_080F6558:
	.4byte 0x00000F62
_080F655C:
	.4byte 0x00000ED2
_080F6560:
	add r0, r5, #0
	mov r1, #0
	bl sub_080F6628
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r1, _080F6584  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080F6588  @ =0x00000FD2
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #105
	strb r1, [r0]
	b _080F65F0
_080F6584:
	.4byte 0x00000FC2
_080F6588:
	.4byte 0x00000FD2
_080F658C:
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F65F0
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A20
	ldr r1, _080F65F8  @ =0x00000FC2
	add r0, r4, r1
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080F65F0
	add r0, r5, #0
	bl sub_080C9898
	cmp r0, #0
	beq _080F65D6
	ldr r2, _080F65FC  @ =0x00001042
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080F65F0
_080F65D6:
	mov r0, #4
	strb r0, [r6]
	ldr r0, _080F6600  @ =0x00000F22
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	add r0, r7, #0
	mov r1, #113
	bl sub_080CF0AC
_080F65F0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F65F8:
	.4byte 0x00000FC2
_080F65FC:
	.4byte 0x00001042
_080F6600:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F636C

