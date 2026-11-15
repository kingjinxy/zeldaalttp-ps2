	THUMB_FUNC_START sub_0806BDB8
sub_0806BDB8: @ 0x0806BDB8
	push {r4,lr}
	sub sp, sp, #4
	mov r0, sp
	mov r4, #0
	strh r4, [r0]
	ldr r1, _0806BE08  @ =gUnknown_02002000
	ldr r2, _0806BE0C  @ =0x01000240
	bl CpuSet
	ldr r0, _0806BE10  @ =gUnknown_0200220C
	mov r2, #240
	lsl r2, r2, #8
	add r1, r2, #0
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	ldr r1, _0806BE14  @ =gUnknown_020023EC
	ldr r2, _0806BE18  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	sub r1, r1, #147
	mov r0, #232
	strb r0, [r1]
	ldr r0, _0806BE1C  @ =gCurrentHealth
	mov r1, #24
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r0, _0806BE20  @ =gRam
	ldr r2, _0806BE24  @ =0x0000165E
	add r1, r0, r2
	strb r4, [r1]
	ldr r1, _0806BE28  @ =0x0000165F
	add r0, r0, r1
	strb r4, [r0]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BE08:
	.4byte gUnknown_02002000
_0806BE0C:
	.4byte 0x01000240
_0806BE10:
	.4byte gUnknown_0200220C
_0806BE14:
	.4byte gUnknown_020023EC
_0806BE18:
	.4byte 0x0000FFFF
_0806BE1C:
	.4byte gCurrentHealth
_0806BE20:
	.4byte gRam
_0806BE24:
	.4byte 0x0000165E
_0806BE28:
	.4byte 0x0000165F
	THUMB_FUNC_END sub_0806BDB8

