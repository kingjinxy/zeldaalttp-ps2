	THUMB_FUNC_START sub_08132574
sub_08132574: @ 0x08132574
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	ldr r4, _081325E0  @ =gRam
	lsr r0, r0, #23
	ldr r2, _081325E4  @ =0x00000D0A
	add r1, r4, r2
	add r7, r0, r1
	ldrh r1, [r7]
	sub r2, r2, #18
	add r5, r4, r2
	strh r1, [r5]
	add r2, r2, #24
	add r1, r4, r2
	add r6, r0, r1
	ldrh r1, [r6]
	sub r2, r2, #22
	add r2, r2, r4
	mov r8, r2
	strh r1, [r2]
	ldr r1, _081325E8  @ =gUnknown_0822C002
	add r0, r0, r1
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	add r0, r0, #16
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	bl sub_081325F0
	ldrh r0, [r5]
	cmp r0, #0
	beq _081325C2
	bl sub_081325F0
_081325C2:
	ldrh r0, [r5]
	strh r0, [r7]
	mov r1, r8
	ldrh r0, [r1]
	strh r0, [r6]
	ldr r2, _081325EC  @ =0x0000099B
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081325E0:
	.4byte gRam
_081325E4:
	.4byte 0x00000D0A
_081325E8:
	.4byte gUnknown_0822C002
_081325EC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132574

