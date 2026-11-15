	THUMB_FUNC_START sub_0807B074
sub_0807B074: @ 0x0807B074
	push {r4-r7,lr}
	sub sp, sp, #4
	add r1, r0, #0
	ldr r5, _0807B0E8  @ =gRam
	ldr r0, _0807B0EC  @ =0x00000974
	add r6, r5, r0
	mov r7, #0
	strh r1, [r6]
	ldr r0, _0807B0F0  @ =0x00000B62
	add r4, r5, r0
	ldrh r0, [r4]
	str r0, [sp]
	ldrh r0, [r4]
	cmp r0, #0
	bne _0807B094
	strh r1, [r4]
_0807B094:
	mov r0, sp
	bl sub_08079A10
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B0E0
	mov r1, #0
	ldrsh r0, [r6, r1]
	ldr r1, [sp]
	add r1, r1, r0
	str r1, [sp]
	ldrh r0, [r4]
	cmp r0, r1
	beq _0807B0E0
	strh r1, [r4]
	ldr r1, _0807B0F4  @ =0x000009F4
	add r0, r5, r1
	strh r7, [r0]
	sub r1, r1, #12
	add r0, r5, r1
	strh r7, [r0]
	ldr r0, _0807B0F8  @ =0x000009AD
	add r1, r5, r0
	mov r0, #3
	strb r0, [r1]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r1, _0807B0FC  @ =0x00000B64
	add r2, r5, r1
	ldrh r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strh r0, [r2]
	bl sub_0807597C
_0807B0E0:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_0807B0E8:
	.4byte gRam
_0807B0EC:
	.4byte 0x00000974
_0807B0F0:
	.4byte 0x00000B62
_0807B0F4:
	.4byte 0x000009F4
_0807B0F8:
	.4byte 0x000009AD
_0807B0FC:
	.4byte 0x00000B64
	THUMB_FUNC_END sub_0807B074

