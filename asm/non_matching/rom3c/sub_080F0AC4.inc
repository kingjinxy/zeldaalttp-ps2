	THUMB_FUNC_START sub_080F0AC4
sub_080F0AC4: @ 0x080F0AC4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080F0E8C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F0B44
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C5080
	ldr r6, _080F0B50  @ =gRam
	ldr r1, _080F0B54  @ =0x00001002
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C79F8
	ldr r2, _080F0B58  @ =0x00001132
	add r0, r6, r2
	add r5, r4, r0
	ldrb r7, [r5]
	mov r0, #7
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F0B2C
	ldr r0, _080F0B5C  @ =0x00000F82
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080F0B60  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	strb r1, [r2]
	mov r1, #3
	strb r1, [r0]
_080F0B2C:
	strb r7, [r5]
	ldr r1, _080F0B64  @ =gUnknown_08178D78
	ldr r2, _080F0B60  @ =0x00000F52
	add r0, r6, r2
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, r8
	bl _call_via_r1
_080F0B44:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0B50:
	.4byte gRam
_080F0B54:
	.4byte 0x00001002
_080F0B58:
	.4byte 0x00001132
_080F0B5C:
	.4byte 0x00000F82
_080F0B60:
	.4byte 0x00000F52
_080F0B64:
	.4byte gUnknown_08178D78
	THUMB_FUNC_END sub_080F0AC4

