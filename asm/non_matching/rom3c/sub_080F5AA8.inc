	THUMB_FUNC_START sub_080F5AA8
sub_080F5AA8: @ 0x080F5AA8
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r7, #0
	ldr r2, _080F5B04  @ =gRam
	ldr r1, _080F5B08  @ =0x00001132
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #7
	strb r1, [r0]
	ldr r1, _080F5B0C  @ =0x00000F62
	add r0, r2, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080F5B1C
	mov r1, #0
	ldr r6, _080F5B10  @ =gUnknown_081798B4
	add r4, r2, #0
	ldr r2, _080F5B14  @ =0x000009C6
	add r0, r4, r2
	ldrh r2, [r0]
	ldr r3, _080F5B18  @ =gUnknown_081798BC
_080F5AD8:
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r2, r0
	beq _080F5AEA
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080F5AD8
_080F5AEA:
	lsl r0, r1, #1
	add r0, r0, r6
	ldrh r1, [r0]
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F5B0C  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	b _080F5B5E
_080F5B04:
	.4byte gRam
_080F5B08:
	.4byte 0x00001132
_080F5B0C:
	.4byte 0x00000F62
_080F5B10:
	.4byte gUnknown_081798B4
_080F5B14:
	.4byte 0x000009C6
_080F5B18:
	.4byte gUnknown_081798BC
_080F5B1C:
	ldr r1, _080F5B54  @ =0x00000EE2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	eor r0, r0, r1
	strb r0, [r4]
	ldr r1, _080F5B58  @ =gUnknown_081798C0
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, sp
	add r2, r2, #1
	add r0, r5, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F5B5C
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F5B5E
	mov r7, #1
	b _080F5B5E
	.byte 0x00
	.byte 0x00
_080F5B54:
	.4byte 0x00000EE2
_080F5B58:
	.4byte gUnknown_081798C0
_080F5B5C:
	strb r7, [r4]
_080F5B5E:
	add r0, r7, #0
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080F5AA8

