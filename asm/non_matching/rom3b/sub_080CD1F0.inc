	THUMB_FUNC_START sub_080CD1F0
sub_080CD1F0: @ 0x080CD1F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r3, _080CD2D8  @ =gRam
	ldr r1, _080CD2DC  @ =0x00000D4B
	add r0, r3, r1
	mov r1, r8
	add r2, r1, r0
	ldrb r4, [r2]
	cmp r4, #128
	beq _080CD212
	b _080CD318
_080CD212:
	mov r0, #127
	strb r0, [r2]
	ldr r0, _080CD2E0  @ =0x000015F9
	add r1, r3, r0
	mov r0, #3
	strb r0, [r1]
	add r6, r3, #0
	mov r9, r1
	ldr r1, _080CD2E4  @ =0x00000F72
	add r1, r1, r6
	mov r10, r1
_080CD228:
	mov r0, #155
	mov r1, r8
	mov r2, #12
	bl sub_080C9AAC
	add r2, r0, #0
	mov r0, r9
	ldrb r3, [r0]
	ldr r0, _080CD2E8  @ =0x000016C4
	add r1, r6, r0
	ldr r0, _080CD2EC  @ =gUnknown_08172B3C
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080CD2F0  @ =gUnknown_08172B40
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r7, r1, #16
	lsr r1, r7, #16
	mov r12, r1
	mov r0, #182
	lsl r0, r0, #5
	add r1, r6, r0
	ldr r0, _080CD2F4  @ =gUnknown_08172B44
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080CD2F8  @ =gUnknown_08172B48
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r4, r1, #16
	lsr r5, r4, #16
	cmp r2, #0
	blt _080CD32A
	ldr r1, _080CD2FC  @ =0x00000EE2
	add r0, r6, r1
	add r0, r2, r0
	mov r1, r12
	strb r1, [r0]
	ldr r1, _080CD300  @ =0x00000F02
	add r0, r6, r1
	add r0, r2, r0
	lsr r1, r7, #24
	strb r1, [r0]
	ldr r1, _080CD304  @ =0x00000ED2
	add r0, r6, r1
	add r0, r2, r0
	strb r5, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r2, r0
	lsr r1, r4, #24
	strb r1, [r0]
	ldr r0, _080CD308  @ =0x00000FC2
	add r1, r6, r0
	add r1, r2, r1
	ldr r0, _080CD30C  @ =gUnknown_08172B4C
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080CD310  @ =0x000010F2
	add r1, r6, r3
	add r1, r2, r1
	ldr r3, _080CD314  @ =0x00000D5B
	add r0, r6, r3
	add r0, r0, r8
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r10
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080CD228
	b _080CD32A
	.byte 0x00
	.byte 0x00
_080CD2D8:
	.4byte gRam
_080CD2DC:
	.4byte 0x00000D4B
_080CD2E0:
	.4byte 0x000015F9
_080CD2E4:
	.4byte 0x00000F72
_080CD2E8:
	.4byte 0x000016C4
_080CD2EC:
	.4byte gUnknown_08172B3C
_080CD2F0:
	.4byte gUnknown_08172B40
_080CD2F4:
	.4byte gUnknown_08172B44
_080CD2F8:
	.4byte gUnknown_08172B48
_080CD2FC:
	.4byte 0x00000EE2
_080CD300:
	.4byte 0x00000F02
_080CD304:
	.4byte 0x00000ED2
_080CD308:
	.4byte 0x00000FC2
_080CD30C:
	.4byte gUnknown_08172B4C
_080CD310:
	.4byte 0x000010F2
_080CD314:
	.4byte 0x00000D5B
_080CD318:
	ldr r1, _080CD338  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080CD32A
	sub r0, r4, #1
	strb r0, [r2]
_080CD32A:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080CD338:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080CD1F0

