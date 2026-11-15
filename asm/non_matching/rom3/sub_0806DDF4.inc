	THUMB_FUNC_START sub_0806DDF4
sub_0806DDF4: @ 0x0806DDF4
	push {r4-r6,lr}
	ldr r2, _0806DE60  @ =gRam
	ldr r1, _0806DE64  @ =0x000017E1
	add r0, r2, r1
	mov r3, #0
	strb r3, [r0]
	sub r1, r1, #7
	add r0, r2, r1
	strb r3, [r0]
	mov r6, #52
	mov r5, #60
	sub r1, r1, #179
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _0806DE38
	mov r6, #50
	mov r5, #56
	ldr r1, _0806DE68  @ =0x00000B1E
	add r0, r4, r1
	strh r3, [r0]
	sub r1, r1, #46
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _0806DE38
	mov r0, #161
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_0806DE38:
	ldr r1, _0806DE6C  @ =0x00000B0C
	add r0, r4, r1
	strh r5, [r0]
	add r0, r6, #0
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0806DE70  @ =0x00001712
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0806DE74  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806DE60:
	.4byte gRam
_0806DE64:
	.4byte 0x000017E1
_0806DE68:
	.4byte 0x00000B1E
_0806DE6C:
	.4byte 0x00000B0C
_0806DE70:
	.4byte 0x00001712
_0806DE74:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806DDF4

