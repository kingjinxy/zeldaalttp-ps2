	THUMB_FUNC_START sub_0807DF08
sub_0807DF08: @ 0x0807DF08
	push {r4,lr}
	sub sp, sp, #4
	bl sub_0807DDD0
	cmp r0, #1
	bne _0807DF9C
	ldr r1, _0807DF7C  @ =gRam
	ldr r0, _0807DF80  @ =0x00000ACE
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r2, _0807DF84  @ =0x000009EE
	add r0, r1, r2
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _0807DF88  @ =0x00000AC4
	add r2, r1, r3
	strh r0, [r2]
	ldr r3, _0807DF8C  @ =gUnknown_0816790C
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r4, _0807DF90  @ =0x00000978
	add r3, r1, r4
	strh r0, [r3]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r0, [r0]
	add r0, r0, #6
	sub r4, r4, #12
	add r2, r1, r4
	strh r0, [r2]
	add r4, r1, #0
_0807DF50:
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807DF50
	ldr r1, _0807DF94  @ =0x0000096C
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r0, r0, #4
	ldr r3, _0807DF98  @ =0x0000083F
	add r1, r3, #0
	and r0, r0, r1
	mov r2, #173
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	b _0807DFBC
_0807DF7C:
	.4byte gRam
_0807DF80:
	.4byte 0x00000ACE
_0807DF84:
	.4byte 0x000009EE
_0807DF88:
	.4byte 0x00000AC4
_0807DF8C:
	.4byte gUnknown_0816790C
_0807DF90:
	.4byte 0x00000978
_0807DF94:
	.4byte 0x0000096C
_0807DF98:
	.4byte 0x0000083F
_0807DF9C:
	ldr r0, _0807DFC4  @ =gRam
	ldr r3, _0807DFC8  @ =0x00000A1E
	add r0, r0, r3
	ldrh r0, [r0]
	cmp r0, #151
	beq _0807DFBC
	mov r1, sp
	mov r4, #246
	lsl r4, r4, #1
	add r0, r4, #0
	strh r0, [r1]
	ldr r1, _0807DFCC  @ =gUnknown_0201A000
	ldr r2, _0807DFD0  @ =0x01001000
	mov r0, sp
	bl CpuSet
_0807DFBC:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0807DFC4:
	.4byte gRam
_0807DFC8:
	.4byte 0x00000A1E
_0807DFCC:
	.4byte gUnknown_0201A000
_0807DFD0:
	.4byte 0x01001000
	THUMB_FUNC_END sub_0807DF08

