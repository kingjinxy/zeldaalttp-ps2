	THUMB_FUNC_START sub_0807FE08
sub_0807FE08: @ 0x0807FE08
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #8
	add r5, r0, #0
	ldr r2, _0807FE9C  @ =gRam
	ldr r1, _0807FEA0  @ =0x000009EA
	add r0, r2, r1
	mov r1, #0
	strh r1, [r0]
	ldr r3, _0807FEA4  @ =0x000009EE
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _0807FEA8  @ =0x000009F4
	add r3, r2, r0
	ldrh r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	ldr r1, _0807FEAC  @ =0x0000FFFF
	cmp r0, r1
	beq _0807FE90
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r2
	mov r8, r0
_0807FE3C:
	ldrh r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	mov r2, r8
	strh r0, [r2]
	ldrh r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	cmp r0, r1
	beq _0807FE90
	ldr r4, _0807FEB0  @ =gUnknown_03002C24
	add r7, r4, #0
	sub r7, r7, #148
	ldr r6, _0807FEAC  @ =0x0000FFFF
_0807FE5C:
	ldrh r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r7]
	str r1, [sp]
	str r3, [sp, #4]
	bl sub_0807FBC4
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldrh r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	ldr r1, [sp]
	ldr r3, [sp, #4]
	cmp r0, r6
	bne _0807FE5C
	ldrh r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	cmp r0, r1
	bne _0807FE3C
_0807FE90:
	add sp, sp, #8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0807FE9C:
	.4byte gRam
_0807FEA0:
	.4byte 0x000009EA
_0807FEA4:
	.4byte 0x000009EE
_0807FEA8:
	.4byte 0x000009F4
_0807FEAC:
	.4byte 0x0000FFFF
_0807FEB0:
	.4byte gUnknown_03002C24
	THUMB_FUNC_END sub_0807FE08

