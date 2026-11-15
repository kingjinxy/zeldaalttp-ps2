	THUMB_FUNC_START sub_080C1D70
sub_080C1D70: @ 0x080C1D70
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C1F70
	ldr r2, _080C1DAC  @ =gRam
	ldr r1, _080C1DB0  @ =0x00001012
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #31
	and r1, r1, r0
	lsl r0, r1, #2
	add r1, r0, #4
	ldr r3, _080C1DB4  @ =0x000015F7
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C1DC4
	ldr r3, _080C1DB8  @ =0x000010F2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C1DBC
	add r0, r1, #0
	bl sub_080CF3E8
	b _080C1DCA
_080C1DAC:
	.4byte gRam
_080C1DB0:
	.4byte 0x00001012
_080C1DB4:
	.4byte 0x000015F7
_080C1DB8:
	.4byte 0x000010F2
_080C1DBC:
	add r0, r1, #0
	bl sub_080CF3B8
	b _080C1DCA
_080C1DC4:
	add r0, r1, #0
	bl sub_080CF370
_080C1DCA:
	ldr r1, _080C1E50  @ =gRam
	ldr r2, _080C1E54  @ =0x000009AD
	add r0, r1, r2
	ldr r3, _080C1E58  @ =0x00001605
	add r2, r1, r3
	ldrb r3, [r0]
	ldrb r0, [r2]
	orr r0, r0, r3
	add r3, r1, #0
	cmp r0, #0
	beq _080C1DE2
	b _080C1F10
_080C1DE2:
	ldr r1, _080C1E5C  @ =0x00000FC2
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1DF2
	sub r0, r0, #1
	strb r0, [r1]
_080C1DF2:
	ldr r2, _080C1E60  @ =0x00000FD2
	add r0, r3, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1E02
	sub r0, r0, #1
	strb r0, [r1]
_080C1E02:
	ldr r1, _080C1E64  @ =0x00000FE2
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1E12
	sub r0, r0, #1
	strb r0, [r1]
_080C1E12:
	ldr r2, _080C1E68  @ =0x000010B2
	add r0, r3, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1E22
	sub r0, r0, #1
	strb r0, [r1]
_080C1E22:
	ldr r1, _080C1E6C  @ =0x000011C2
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1E32
	sub r0, r0, #1
	strb r0, [r1]
_080C1E32:
	ldr r2, _080C1E70  @ =0x000010C2
	add r0, r3, r2
	add r1, r4, r0
	ldrb r0, [r1]
	mov r5, #127
	and r5, r5, r0
	cmp r5, #0
	bne _080C1E78
	strb r5, [r1]
	ldr r1, _080C1E74  @ =0x00000D94
	add r0, r3, r1
	add r0, r4, r0
	strb r5, [r0]
	b _080C1F00
	.byte 0x00
	.byte 0x00
_080C1E50:
	.4byte gRam
_080C1E54:
	.4byte 0x000009AD
_080C1E58:
	.4byte 0x00001605
_080C1E5C:
	.4byte 0x00000FC2
_080C1E60:
	.4byte 0x00000FD2
_080C1E64:
	.4byte 0x00000FE2
_080C1E68:
	.4byte 0x000010B2
_080C1E6C:
	.4byte 0x000011C2
_080C1E70:
	.4byte 0x000010C2
_080C1E74:
	.4byte 0x00000D94
_080C1E78:
	ldr r2, _080C1F44  @ =0x00000FA2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080C1EC4
	cmp r5, #31
	bne _080C1EBA
	ldr r1, _080C1F48  @ =0x00000FF2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #122
	bne _080C1EBA
	ldr r2, _080C1F4C  @ =0x0000164C
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1EBA
	add r1, r1, #48
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080C1F50  @ =0x00000EB5
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	sub r1, r1, r0
	cmp r1, #0
	bgt _080C1EBA
	ldr r0, _080C1F54  @ =0x00000143
	bl sub_080C95C0
_080C1EBA:
	cmp r5, #24
	bne _080C1EC4
	add r0, r4, #0
	bl sub_080C2160
_080C1EC4:
	ldr r0, _080C1F58  @ =gRam
	ldr r3, _080C1F50  @ =0x00000EB5
	add r1, r0, r3
	add r1, r4, r1
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #250
	bhi _080C1EF4
	ldr r1, _080C1F5C  @ =0x000010C2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r1, #127
	and r1, r1, r0
	cmp r1, #19
	bls _080C1EF4
	ldr r2, _080C1F60  @ =0x00000D94
	add r0, r3, r2
	add r0, r4, r0
	mov r2, #0
	cmp r1, #20
	beq _080C1EF2
	mov r2, #14
_080C1EF2:
	strb r2, [r0]
_080C1EF4:
	ldr r0, _080C1F5C  @ =0x000010C2
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080C1F00:
	ldr r1, _080C1F64  @ =0x000010E2
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C1F10
	sub r0, r0, #1
	strb r0, [r1]
_080C1F10:
	add r1, r3, #0
	mov r2, #161
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r2, [r0]
	cmp r2, #3
	beq _080C1F26
	ldr r2, _080C1F68  @ =0x000010F2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
_080C1F26:
	ldr r0, _080C1F60  @ =0x00000D94
	add r1, r3, r0
	add r1, r4, r1
	ldrb r5, [r1]
	mov r0, #207
	and r5, r5, r0
	ldr r0, _080C1F6C  @ =gUnknown_08171DBC
	add r0, r2, r0
	ldrb r0, [r0]
	orr r5, r5, r0
	strb r5, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C1F44:
	.4byte 0x00000FA2
_080C1F48:
	.4byte 0x00000FF2
_080C1F4C:
	.4byte 0x0000164C
_080C1F50:
	.4byte 0x00000EB5
_080C1F54:
	.4byte 0x00000143
_080C1F58:
	.4byte gRam
_080C1F5C:
	.4byte 0x000010C2
_080C1F60:
	.4byte 0x00000D94
_080C1F64:
	.4byte 0x000010E2
_080C1F68:
	.4byte 0x000010F2
_080C1F6C:
	.4byte gUnknown_08171DBC
	THUMB_FUNC_END sub_080C1D70

