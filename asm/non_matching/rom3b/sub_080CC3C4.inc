	THUMB_FUNC_START sub_080CC3C4
sub_080CC3C4: @ 0x080CC3C4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080CC3F8  @ =gRam
	ldr r3, _080CC3FC  @ =0x00000D4B
	add r0, r2, r3
	add r4, r1, r0
	ldrb r5, [r4]
	add r3, r5, #0
	cmp r3, #0
	beq _080CC3DC
	b _080CC4D4
_080CC3DC:
	ldr r5, _080CC400  @ =0x00000D43
	add r0, r2, r5
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _080CC404
	mov r0, #208
	strb r0, [r4]
	b _080CC408
	.byte 0x00
	.byte 0x00
_080CC3F8:
	.4byte gRam
_080CC3FC:
	.4byte 0x00000D4B
_080CC400:
	.4byte 0x00000D43
_080CC404:
	strb r3, [r2]
	strb r3, [r4]
_080CC408:
	mov r0, #133
	mov r2, #12
	bl sub_080C9AAC
	add r6, r0, #0
	cmp r6, #0
	blt _080CC4E6
	ldr r5, _080CC4AC  @ =gRam
	ldr r1, _080CC4B0  @ =0x000016D5
	add r0, r5, r1
	ldrb r3, [r0]
	lsr r3, r3, #1
	sub r1, r1, #17
	add r0, r5, r1
	ldrb r4, [r0]
	add r1, r1, #1
	add r0, r5, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080CC4B4  @ =gUnknown_081729F8
	add r0, r3, r0
	orr r4, r4, r1
	ldrb r0, [r0]
	add r4, r4, r0
	ldr r0, _080CC4B8  @ =gUnknown_08172A00
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r4, r4, r0
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r5, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080CC4BC  @ =gUnknown_081729FC
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080CC4C0  @ =gUnknown_08172A04
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _080CC4C4  @ =0x00000EE2
	add r0, r5, r3
	add r0, r6, r0
	strb r4, [r0]
	ldr r1, _080CC4C8  @ =0x00000F02
	add r0, r5, r1
	add r0, r6, r0
	lsr r4, r4, #8
	strb r4, [r0]
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r6, r0
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r5, r1
	add r0, r6, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r3, _080CC4CC  @ =0x00001142
	add r0, r5, r3
	add r0, r6, r0
	mov r1, #144
	strb r1, [r0]
	ldr r1, _080CC4D0  @ =0x000010F2
	add r0, r5, r1
	add r0, r6, r0
	mov r3, #161
	lsl r3, r3, #4
	add r5, r5, r3
	ldrb r1, [r5]
	strb r1, [r0]
	b _080CC4E6
	.byte 0x00
	.byte 0x00
_080CC4AC:
	.4byte gRam
_080CC4B0:
	.4byte 0x000016D5
_080CC4B4:
	.4byte gUnknown_081729F8
_080CC4B8:
	.4byte gUnknown_08172A00
_080CC4BC:
	.4byte gUnknown_081729FC
_080CC4C0:
	.4byte gUnknown_08172A04
_080CC4C4:
	.4byte 0x00000EE2
_080CC4C8:
	.4byte 0x00000F02
_080CC4CC:
	.4byte 0x00001142
_080CC4D0:
	.4byte 0x000010F2
_080CC4D4:
	ldr r1, _080CC4EC  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080CC4E6
	sub r0, r5, #1
	strb r0, [r4]
_080CC4E6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080CC4EC:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080CC3C4

