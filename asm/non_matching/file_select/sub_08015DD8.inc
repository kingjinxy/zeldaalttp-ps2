	THUMB_FUNC_START sub_08015DD8
sub_08015DD8: @ 0x08015DD8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	ldr r3, _08015E1C  @ =gUnknown_03000450
	mov r4, #0
	strh r4, [r3, #28]
	strh r4, [r3, #30]
	ldr r0, [r3]
	ldrh r2, [r0, #50]
	ldrh r5, [r0, #54]
	strh r4, [r3, #20]
	mov r1, #14
	strh r1, [r3, #18]
	add r0, r0, #80
	strh r1, [r0]
	mov r1, #252
	lsl r1, r1, #2
	strh r1, [r3, #40]
	strh r1, [r3, #42]
	strh r4, [r3, #24]
	strh r4, [r3, #26]
	strh r2, [r3, #36]
	strh r5, [r3, #38]
	lsl r2, r2, #16
	asr r2, r2, #16
	cmp r2, #119
	bgt _08015E20
	strh r4, [r3, #32]
	b _08015E34
	.byte 0x00
	.byte 0x00
_08015E1C:
	.4byte gUnknown_03000450
_08015E20:
	mov r0, #222
	lsl r0, r0, #2
	cmp r0, r2
	bge _08015E2E
	add r0, r1, #0
	sub r0, r0, #240
	b _08015E32
_08015E2E:
	add r0, r2, #0
	sub r0, r0, #120
_08015E32:
	strh r0, [r3, #32]
_08015E34:
	lsl r0, r5, #16
	asr r1, r0, #16
	cmp r1, #79
	bgt _08015E48
	ldr r1, _08015E44  @ =gUnknown_03000450
	mov r0, #0
	strh r0, [r1, #34]
	b _08015E5A
_08015E44:
	.4byte gUnknown_03000450
_08015E48:
	ldr r3, _08015F4C  @ =gUnknown_03000450
	ldrh r2, [r3, #42]
	add r0, r2, #0
	sub r0, r0, #80
	cmp r0, r1
	blt _08015E56
	add r0, r1, #0
_08015E56:
	sub r0, r0, #80
	strh r0, [r3, #34]
_08015E5A:
	ldr r0, _08015F50  @ =gUnknown_02038000
	mov r1, #128
	lsl r1, r1, #4
	bl zero_memory
	mov r0, sp
	ldr r1, _08015F54  @ =0x0000FFFF
	add r5, r1, #0
	strh r5, [r0]
	ldr r7, _08015F58  @ =gUnknown_02024024
	ldr r6, _08015F5C  @ =0x01000800
	add r1, r7, #0
	add r2, r6, #0
	bl CpuSet
	mov r4, #0
	strh r4, [r7]
	mov r0, sp
	add r0, r0, #2
	strh r5, [r0]
	ldr r5, _08015F60  @ =gUnknown_02010324
	add r1, r5, #0
	add r2, r6, #0
	bl CpuSet
	strh r4, [r5]
	ldr r0, _08015F64  @ =gUnknown_08146078
	mov r2, r8
	lsl r4, r2, #2
	add r0, r4, r0
	ldr r0, [r0]
	mov r1, #1
	bl sub_0801484C
	mov r0, #30
	bl load_gfx_group
	bl sub_0801620C
	ldr r0, _08015F68  @ =gUnknown_08146060
	add r4, r4, r0
	ldr r0, [r4]
	cmp r0, #0
	beq _08015EB6
	bl sub_08015D50
_08015EB6:
	add r1, r7, #0
	mov r2, #0
	ldr r4, _08015F4C  @ =gUnknown_03000450
	add r6, r5, #0
	ldr r0, _08015F6C  @ =0xFFFFAFFC
	add r7, r1, r0
	add r0, r0, r6
	mov r12, r0
	ldr r3, _08015F70  @ =0x000007FF
	mov r0, #128
	lsl r0, r0, #5
	add r5, r1, r0
_08015ECE:
	ldrh r0, [r1]
	cmp r0, r3
	bhi _08015EDA
	lsl r0, r0, #1
	add r0, r0, r5
	strh r2, [r0]
_08015EDA:
	lsl r0, r2, #16
	mov r2, #128
	lsl r2, r2, #9
	add r0, r0, r2
	add r1, r1, #2
	lsr r2, r0, #16
	asr r0, r0, #16
	cmp r0, r3
	ble _08015ECE
	add r1, r6, #0
	mov r2, #0
	ldr r3, _08015F70  @ =0x000007FF
	mov r0, #128
	lsl r0, r0, #5
	add r5, r1, r0
_08015EF8:
	ldrh r0, [r1]
	cmp r0, r3
	bhi _08015F04
	lsl r0, r0, #1
	add r0, r0, r5
	strh r2, [r0]
_08015F04:
	lsl r0, r2, #16
	mov r2, #128
	lsl r2, r2, #9
	add r0, r0, r2
	add r1, r1, #2
	lsr r2, r0, #16
	asr r0, r0, #16
	cmp r0, r3
	ble _08015EF8
	ldr r3, [r7]
	mov r0, r12
	ldr r2, [r0]
	ldrh r0, [r4, #32]
	ldrh r1, [r4, #28]
	add r0, r0, r1
	ldrh r1, [r4, #24]
	sub r0, r0, r1
	strh r0, [r2, #2]
	strh r0, [r3, #2]
	ldr r3, [r7]
	mov r0, r12
	ldr r2, [r0]
	ldrh r0, [r4, #34]
	ldrh r1, [r4, #30]
	add r0, r0, r1
	ldrh r1, [r4, #26]
	sub r0, r0, r1
	strh r0, [r2, #4]
	strh r0, [r3, #4]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08015F4C:
	.4byte gUnknown_03000450
_08015F50:
	.4byte gUnknown_02038000
_08015F54:
	.4byte 0x0000FFFF
_08015F58:
	.4byte gUnknown_02024024
_08015F5C:
	.4byte 0x01000800
_08015F60:
	.4byte gUnknown_02010324
_08015F64:
	.4byte gUnknown_08146078
_08015F68:
	.4byte gUnknown_08146060
_08015F6C:
	.4byte 0xFFFFAFFC
_08015F70:
	.4byte 0x000007FF
	THUMB_FUNC_END sub_08015DD8

