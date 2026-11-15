	THUMB_FUNC_START sub_080E7988
sub_080E7988: @ 0x080E7988
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080E79B8  @ =gRam
	ldr r2, _080E79BC  @ =0x0000096C
	add r1, r0, r2
	mov r2, #2
	strb r2, [r1]
	ldr r3, _080E79C0  @ =0x0000096D
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _080E79C4  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #10
	bne _080E79CC
	ldr r1, _080E79C8  @ =gUnknown_081778A4
	add r0, r4, #0
	bl sub_080C94AC
	b _080E79D4
	.byte 0x00
	.byte 0x00
_080E79B8:
	.4byte gRam
_080E79BC:
	.4byte 0x0000096C
_080E79C0:
	.4byte 0x0000096D
_080E79C4:
	.4byte 0x00000FA2
_080E79C8:
	.4byte gUnknown_081778A4
_080E79CC:
	ldr r1, _080E7A08  @ =gUnknown_081778A4
	add r0, r4, #0
	bl sub_080C94D0
_080E79D4:
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7A2E
	add r0, r4, #0
	bl sub_080C841C
	cmp r0, #0
	bne _080E7A2E
	ldr r1, _080E7A0C  @ =gRam
	ldr r2, _080E7A10  @ =0x0000140C
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _080E7A14
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C8168
	b _080E7A2E
	.byte 0x00
	.byte 0x00
_080E7A08:
	.4byte gUnknown_081778A4
_080E7A0C:
	.4byte gRam
_080E7A10:
	.4byte 0x0000140C
_080E7A14:
	ldr r3, _080E7A38  @ =0x00000F82
	add r0, r1, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080E7A2E
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #114
	mov r2, sp
	bl sub_080C9564
_080E7A2E:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E7A38:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080E7988

