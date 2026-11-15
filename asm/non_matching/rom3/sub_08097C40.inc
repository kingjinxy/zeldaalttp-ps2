	THUMB_FUNC_START sub_08097C40
sub_08097C40: @ 0x08097C40
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	mov r2, sp
	ldr r1, _08097CD4  @ =gRam
	ldr r3, _08097CD8  @ =0x000017CA
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2, #2]
	add r2, sp, #4
	sub r3, r3, #10
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2, #2]
	mov r6, #1
	ldr r0, _08097CDC  @ =0x00000964
	add r3, r1, r0
	mov r0, #3
	strh r0, [r3]
	mov r9, r1
	mov r10, r2
	mov r12, r3
	mov r7, r10
	ldr r1, _08097CE0  @ =0x0000017F
	mov r8, r1
	ldr r0, _08097CE4  @ =0x00000545
	add r0, r0, r9
	ldrb r0, [r0]
	str r0, [sp, #8]
_08097C90:
	mov r2, r12
	mov r3, #0
	ldrsh r0, [r2, r3]
	ldr r1, [sp, #8]
	and r0, r0, r1
	sub r5, r6, #1
	cmp r0, #0
	beq _08097D16
	lsl r1, r6, #1
	mov r2, sp
	add r0, r2, r1
	ldrh r3, [r0]
	add r4, r1, #0
	cmp r3, #0
	beq _08097CEC
	add r0, r7, r4
	ldrh r0, [r0]
	cmp r0, r8
	bls _08097CEC
	mov r2, #0
	ldr r6, _08097CE8  @ =gUnknown_08167E14
_08097CBA:
	lsr r0, r2, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r0]
	cmp r1, r3
	bcs _08097D12
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #18
	bne _08097CBA
	b _08097D12
	.byte 0x00
	.byte 0x00
_08097CD4:
	.4byte gRam
_08097CD8:
	.4byte 0x000017CA
_08097CDC:
	.4byte 0x00000964
_08097CE0:
	.4byte 0x0000017F
_08097CE4:
	.4byte 0x00000545
_08097CE8:
	.4byte gUnknown_08167E14
_08097CEC:
	add r0, r7, r4
	ldrh r0, [r0]
	cmp r0, #0
	beq _08097D06
	add r0, r0, #160
	lsl r0, r0, #16
	lsr r1, r0, #16
	sub r5, r6, #1
	cmp r1, r8
	bls _08097D12
	mov r1, #192
	lsl r1, r1, #1
	b _08097D12
_08097D06:
	mov r3, sp
	add r1, r3, r4
	mov r0, #1
	strh r0, [r1]
	mov r1, #240
	sub r5, r6, #1
_08097D12:
	add r0, r7, r4
	strh r1, [r0]
_08097D16:
	mov r1, r12
	mov r2, #0
	ldrsh r0, [r1, r2]
	lsl r0, r0, #2
	strh r0, [r1]
	lsl r0, r5, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _08097C90
	mov r0, sp
	ldrh r1, [r0]
	ldr r0, _08097D60  @ =0x000017CA
	add r0, r0, r9
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #2]
	ldr r0, _08097D64  @ =0x000017CC
	add r0, r0, r9
	strh r1, [r0]
	mov r3, r10
	ldrh r1, [r3]
	ldr r0, _08097D68  @ =0x000017C2
	add r0, r0, r9
	strh r1, [r0]
	ldrh r1, [r3, #2]
	ldr r0, _08097D6C  @ =0x000017C4
	add r0, r0, r9
	strh r1, [r0]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08097D60:
	.4byte 0x000017CA
_08097D64:
	.4byte 0x000017CC
_08097D68:
	.4byte 0x000017C2
_08097D6C:
	.4byte 0x000017C4
	THUMB_FUNC_END sub_08097C40

