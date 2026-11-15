	THUMB_FUNC_START sub_080B3D5C
sub_080B3D5C: @ 0x080B3D5C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _080B3E60  @ =gUnknown_02000400
	ldrh r5, [r0]
	ldr r1, _080B3E64  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r1, r0
	ldr r0, _080B3E68  @ =0x0000E020
	strh r0, [r2]
	mov r4, #0
	mov r12, r2
	lsl r0, r5, #1
	ldr r2, _080B3E6C  @ =gUnknown_02000402
	add r1, r0, r2
	mov r6, #11
	mov r10, r6
	ldr r7, _080B3E70  @ =0x0000220D
	mov r9, r7
	add r3, r0, #0
	ldr r0, _080B3E74  @ =gUnknown_02000406
	add r2, r3, r0
_080B3D8E:
	mov r6, r12
	ldrh r0, [r6]
	strh r0, [r1]
	mov r7, r10
	strh r7, [r1, #2]
	mov r0, r9
	strh r0, [r2]
	add r1, r1, #6
	add r3, r3, #6
	add r2, r2, #6
	add r5, r5, #3
	add r4, r4, #1
	mov r8, r4
	mov r4, #4
	ldr r6, _080B3E6C  @ =gUnknown_02000402
	add r0, r3, r6
_080B3DAE:
	ldr r7, _080B3E78  @ =0x0000220E
	strh r7, [r0]
	ldr r6, _080B3E7C  @ =0x0000220F
	strh r6, [r0, #2]
	sub r4, r4, #1
	add r0, r0, #4
	add r1, r1, #4
	add r3, r3, #4
	add r2, r2, #4
	add r5, r5, #2
	cmp r4, #0
	bge _080B3DAE
	mov r7, r12
	ldrh r0, [r7]
	add r0, r0, #64
	strh r0, [r7]
	strh r0, [r1]
	mov r0, r10
	strh r0, [r1, #2]
	mov r4, r9
	strh r4, [r2]
	add r1, r1, #6
	add r3, r3, #6
	add r2, r2, #6
	add r5, r5, #3
	ldr r7, _080B3E70  @ =0x0000220D
	add r6, r7, #0
	mov r4, #4
	ldr r7, _080B3E6C  @ =gUnknown_02000402
	add r0, r3, r7
_080B3DEA:
	mov r7, #128
	lsl r7, r7, #2
	strh r7, [r0]
	strh r6, [r0, #2]
	sub r4, r4, #1
	add r0, r0, #4
	add r1, r1, #4
	add r3, r3, #4
	add r2, r2, #4
	add r5, r5, #2
	cmp r4, #0
	bge _080B3DEA
	mov r4, r12
	ldrh r0, [r4]
	add r0, r0, #64
	strh r0, [r4]
	mov r4, r8
	cmp r4, #9
	ble _080B3D8E
	lsl r1, r5, #1
	ldr r3, _080B3E6C  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r6, _080B3E64  @ =gRam
	mov r7, #150
	lsl r7, r7, #4
	add r0, r6, r7
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _080B3E80  @ =gUnknown_02000404
	add r2, r1, r0
	mov r0, #11
	strh r0, [r2]
	ldr r2, _080B3E74  @ =gUnknown_02000406
	add r1, r1, r2
	mov r4, #128
	lsl r4, r4, #2
	add r0, r4, #0
	strh r0, [r1]
	add r5, r5, #3
	ldr r6, _080B3E78  @ =0x0000220E
	add r1, r6, #0
	mov r4, #9
	lsl r0, r5, #1
	add r0, r0, r3
_080B3E42:
	strh r1, [r0]
	sub r4, r4, #1
	add r0, r0, #2
	add r5, r5, #1
	cmp r4, #0
	bge _080B3E42
	ldr r0, _080B3E60  @ =gUnknown_02000400
	strh r5, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B3E60:
	.4byte gUnknown_02000400
_080B3E64:
	.4byte gRam
_080B3E68:
	.4byte 0x0000E020
_080B3E6C:
	.4byte gUnknown_02000402
_080B3E70:
	.4byte 0x0000220D
_080B3E74:
	.4byte gUnknown_02000406
_080B3E78:
	.4byte 0x0000220E
_080B3E7C:
	.4byte 0x0000220F
_080B3E80:
	.4byte gUnknown_02000404
	THUMB_FUNC_END sub_080B3D5C

