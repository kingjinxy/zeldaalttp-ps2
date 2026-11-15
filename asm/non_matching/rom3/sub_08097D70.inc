	THUMB_FUNC_START sub_08097D70
sub_08097D70: @ 0x08097D70
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #24
	ldr r0, _08097E58  @ =gRam
	ldr r2, _08097E5C  @ =0x000017DA
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	beq _08097D8C
	b _08097EE2
_08097D8C:
	ldr r3, _08097E60  @ =0x000017DF
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08097D98
	b _08097EE2
_08097D98:
	mov r1, sp
	ldr r7, _08097E64  @ =0x000017B8
	add r0, r5, r7
	ldrh r0, [r0]
	strh r0, [r1]
	sub r2, r2, #32
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1, #2]
	add r4, sp, #8
	sub r3, r3, #29
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r4]
	add r7, r7, #12
	add r0, r5, r7
	ldrh r0, [r0]
	strh r0, [r4, #2]
	add r2, sp, #12
	ldr r1, _08097E68  @ =0x000017CA
	add r0, r5, r1
	ldrh r0, [r0]
	strh r0, [r2]
	add r3, r3, #10
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r2, #2]
	add r1, sp, #4
	sub r7, r7, #8
	add r0, r5, r7
	ldrh r0, [r0]
	strh r0, [r1]
	sub r3, r3, #14
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1, #2]
	mov r7, #1
	str r7, [sp, #20]
	ldr r0, _08097E6C  @ =0x00000964
	add r3, r5, r0
	mov r0, #3
	strh r0, [r3]
	ldr r1, _08097E70  @ =0x00000545
	add r0, r5, r1
	ldrb r0, [r0]
	str r0, [sp, #16]
	add r6, r3, #0
	mov r2, #0
	mov r10, r2
	add r3, sp, #4
	mov r9, r3
	add r7, sp, #12
	mov r8, r7
	add r0, sp, #8
	mov r12, r0
_08097E06:
	mov r1, #0
	ldrsh r0, [r6, r1]
	ldr r2, [sp, #16]
	and r0, r0, r2
	ldr r3, [sp, #20]
	lsl r2, r3, #1
	cmp r0, #0
	beq _08097E74
	mov r7, sp
	add r4, r7, r2
	ldrh r0, [r4]
	cmp r0, #2
	beq _08097E74
	mov r0, r9
	add r3, r0, r2
	ldrh r0, [r3]
	cmp r0, #0
	bne _08097E40
	strh r0, [r3]
	mov r1, r8
	add r0, r1, r2
	ldrh r1, [r0]
	cmp r1, #239
	bls _08097E84
	mov r7, r12
	add r0, r7, r2
	ldrh r0, [r0]
	cmp r1, r0
	bcc _08097E84
_08097E40:
	mov r0, r10
	strh r0, [r4]
	mov r1, r8
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #239
	bls _08097E74
	mov r0, #1
	strh r0, [r4]
	strh r0, [r3]
	b _08097E84
	.byte 0x00
	.byte 0x00
_08097E58:
	.4byte gRam
_08097E5C:
	.4byte 0x000017DA
_08097E60:
	.4byte 0x000017DF
_08097E64:
	.4byte 0x000017B8
_08097E68:
	.4byte 0x000017CA
_08097E6C:
	.4byte 0x00000964
_08097E70:
	.4byte 0x00000545
_08097E74:
	mov r3, r12
	add r0, r3, r2
	mov r1, #240
	strh r1, [r0]
	mov r7, r9
	add r0, r7, r2
	mov r1, r10
	strh r1, [r0]
_08097E84:
	ldrh r0, [r6]
	lsl r0, r0, #2
	strh r0, [r6]
	ldr r0, [sp, #20]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	str r2, [sp, #20]
	cmp r0, #0
	bge _08097E06
	mov r0, sp
	ldrh r1, [r0]
	ldr r3, _08097EF4  @ =0x000017B8
	add r0, r5, r3
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #2]
	ldr r7, _08097EF8  @ =0x000017BA
	add r0, r5, r7
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #8]
	ldr r2, _08097EFC  @ =0x000017C2
	add r0, r5, r2
	strh r1, [r0]
	mov r3, sp
	ldrh r1, [r3, #10]
	add r7, r7, #10
	add r0, r5, r7
	strh r1, [r0]
	ldrh r1, [r3, #12]
	add r2, r2, #8
	add r0, r5, r2
	strh r1, [r0]
	ldrh r1, [r3, #14]
	ldr r3, _08097F00  @ =0x000017CC
	add r0, r5, r3
	strh r1, [r0]
	mov r7, sp
	ldrh r1, [r7, #4]
	sub r2, r2, #14
	add r0, r5, r2
	strh r1, [r0]
	ldrh r1, [r7, #6]
	sub r3, r3, #14
	add r0, r5, r3
	strh r1, [r0]
_08097EE2:
	add sp, sp, #24
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08097EF4:
	.4byte 0x000017B8
_08097EF8:
	.4byte 0x000017BA
_08097EFC:
	.4byte 0x000017C2
_08097F00:
	.4byte 0x000017CC
	THUMB_FUNC_END sub_08097D70

