	THUMB_FUNC_START sub_0806A318
sub_0806A318: @ 0x0806A318
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	bl sub_0812E554
	ldr r4, _0806A36C  @ =gRam
	ldr r1, _0806A370  @ =0x00000CFE
	add r0, r4, r1
	mov r6, #0
	mov r5, #0
	mov r1, #7
	strh r1, [r0]
	ldr r2, _0806A374  @ =0x00000D04
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #201
	lsl r1, r1, #4
	add r0, r4, r1
	strh r5, [r0]
	bl sub_08077FA4
	ldr r2, _0806A378  @ =0x000009A8
	add r0, r4, r2
	str r5, [r0]
	ldr r0, _0806A37C  @ =gAbilityFlags
	mov r8, r0
	mov r7, #232
	strb r7, [r0]
	bl sub_080BE5FC
	lsl r0, r0, #24
	cmp r0, #0
	bne _0806A388
	ldr r1, _0806A380  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #64
	bne _0806A3C4
	ldr r2, _0806A384  @ =0x000009B2
	b _0806A3C0
	.byte 0x00
	.byte 0x00
_0806A36C:
	.4byte gRam
_0806A370:
	.4byte 0x00000CFE
_0806A374:
	.4byte 0x00000D04
_0806A378:
	.4byte 0x000009A8
_0806A37C:
	.4byte gAbilityFlags
_0806A380:
	.4byte 0x0000165C
_0806A384:
	.4byte 0x000009B2
_0806A388:
	mov r0, sp
	strh r5, [r0]
	ldr r1, _0806A3E4  @ =gUnknown_02002000
	ldr r2, _0806A3E8  @ =0x01000240
	bl CpuSet
	ldr r0, _0806A3EC  @ =gUnknown_0200220C
	mov r2, #240
	lsl r2, r2, #8
	add r1, r2, #0
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	ldr r1, _0806A3F0  @ =gUnknown_020023EC
	ldr r2, _0806A3F4  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	mov r0, r8
	strb r7, [r0]
	ldr r0, _0806A3F8  @ =gCurrentHealth
	mov r1, #24
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r1, _0806A3FC  @ =0x0000165E
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _0806A400  @ =0x0000165F
_0806A3C0:
	add r0, r4, r2
	strb r6, [r0]
_0806A3C4:
	ldr r1, _0806A404  @ =gRam
	ldr r0, _0806A408  @ =0x000009AC
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r2]
	ldr r2, _0806A40C  @ =0x00001AD0
	add r1, r1, r2
	strb r3, [r1]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0806A3E4:
	.4byte gUnknown_02002000
_0806A3E8:
	.4byte 0x01000240
_0806A3EC:
	.4byte gUnknown_0200220C
_0806A3F0:
	.4byte gUnknown_020023EC
_0806A3F4:
	.4byte 0x0000FFFF
_0806A3F8:
	.4byte gCurrentHealth
_0806A3FC:
	.4byte 0x0000165E
_0806A400:
	.4byte 0x0000165F
_0806A404:
	.4byte gRam
_0806A408:
	.4byte 0x000009AC
_0806A40C:
	.4byte 0x00001AD0
	THUMB_FUNC_END sub_0806A318

