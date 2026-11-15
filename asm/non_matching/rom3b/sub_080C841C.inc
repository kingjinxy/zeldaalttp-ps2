	THUMB_FUNC_START sub_080C841C
sub_080C841C: @ 0x080C841C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080C8464  @ =gRam
	ldr r1, _080C8468  @ =0x000016B5
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C8460
	ldr r0, _080C846C  @ =gUnknown_020023F0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C8460
	ldr r1, _080C8470  @ =0x000011C2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C8460
	ldr r1, _080C8474  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #12
	beq _080C8460
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	mov r0, sp
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C847E
_080C8460:
	mov r0, #0
	b _080C84C2
_080C8464:
	.4byte gRam
_080C8468:
	.4byte 0x000016B5
_080C846C:
	.4byte gUnknown_020023F0
_080C8470:
	.4byte 0x000011C2
_080C8474:
	.4byte 0x00000FA2
_080C8478:
	sub r0, r2, r5
	add r0, r0, #2
	b _080C84A6
_080C847E:
	ldr r6, _080C84CC  @ =gUnknown_081724C6
	ldr r1, _080C84D0  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r2, _080C84D4  @ =gUnknown_081724BA
	ldrb r1, [r2]
	add r0, r1, #0
	add r5, r2, #0
	cmp r0, #255
	beq _080C84A2
_080C8494:
	cmp r3, r1
	beq _080C8478
	add r2, r2, #1
	ldrb r1, [r2]
	add r0, r1, #0
	cmp r0, #255
	bne _080C8494
_080C84A2:
	mov r0, #1
	neg r0, r0
_080C84A6:
	lsl r0, r0, #1
	add r0, r6, r0
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _080C84D8  @ =gRam
	ldr r1, _080C84DC  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
	mov r0, #1
_080C84C2:
	add sp, sp, #4
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C84CC:
	.4byte gUnknown_081724C6
_080C84D0:
	.4byte 0x00000FF2
_080C84D4:
	.4byte gUnknown_081724BA
_080C84D8:
	.4byte gRam
_080C84DC:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080C841C

