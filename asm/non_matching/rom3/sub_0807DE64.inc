	THUMB_FUNC_START sub_0807DE64
sub_0807DE64: @ 0x0807DE64
	push {lr}
	sub sp, sp, #4
	bl sub_0807DDD0
	cmp r0, #1
	bne _0807DED0
	ldr r2, _0807DEB8  @ =gRam
	ldr r0, _0807DEBC  @ =0x00000ACE
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _0807DEC0  @ =0x000009EE
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _0807DEC4  @ =0x00000AC4
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _0807DEC8  @ =gUnknown_08167904
	sub r3, r3, #218
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	sub r3, r3, #126
	add r1, r2, r3
	sub r0, r0, #2
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r1, r3]
	add r0, r0, #4
	ldr r3, _0807DECC  @ =0x0000083F
	add r1, r3, #0
	and r0, r0, r1
	mov r1, #173
	lsl r1, r1, #4
	add r2, r2, r1
	strh r0, [r2]
	b _0807DEF0
	.byte 0x00
	.byte 0x00
_0807DEB8:
	.4byte gRam
_0807DEBC:
	.4byte 0x00000ACE
_0807DEC0:
	.4byte 0x000009EE
_0807DEC4:
	.4byte 0x00000AC4
_0807DEC8:
	.4byte gUnknown_08167904
_0807DECC:
	.4byte 0x0000083F
_0807DED0:
	ldr r0, _0807DEF8  @ =gRam
	ldr r2, _0807DEFC  @ =0x00000A1E
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, #151
	beq _0807DEF0
	mov r1, sp
	mov r3, #246
	lsl r3, r3, #1
	add r0, r3, #0
	strh r0, [r1]
	ldr r1, _0807DF00  @ =gUnknown_0201A000
	ldr r2, _0807DF04  @ =0x01001000
	mov r0, sp
	bl CpuSet
_0807DEF0:
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807DEF8:
	.4byte gRam
_0807DEFC:
	.4byte 0x00000A1E
_0807DF00:
	.4byte gUnknown_0201A000
_0807DF04:
	.4byte 0x01001000
	THUMB_FUNC_END sub_0807DE64

