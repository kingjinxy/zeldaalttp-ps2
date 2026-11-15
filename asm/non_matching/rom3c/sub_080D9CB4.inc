	THUMB_FUNC_START sub_080D9CB4
sub_080D9CB4: @ 0x080D9CB4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #1
	mov r8, r0
	mov r4, #3
	ldr r6, _080D9D4C  @ =gRam
	ldr r1, _080D9D50  @ =0x000015E2
	add r1, r1, r6
	mov r9, r1
	ldr r7, _080D9D54  @ =gUnknown_081759D8
_080D9CD0:
	ldr r1, _080D9D58  @ =0x00000ED2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080D9D5C  @ =gUnknown_081759D4
	lsl r4, r4, #24
	asr r3, r4, #24
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	strh r2, [r0]
	ldr r1, _080D9D60  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080D9D64  @ =gUnknown_081759D0
	add r3, r3, r0
	orr r2, r2, r1
	ldrb r3, [r3]
	add r2, r2, r3
	ldr r1, _080D9D68  @ =0x00000964
	add r0, r6, r1
	strh r2, [r0]
	ldr r1, _080D9D6C  @ =0x000010F2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080C781C
	mov r0, r9
	ldrh r1, [r0]
	ldrb r0, [r7]
	cmp r1, r0
	beq _080D9D70
	ldrb r0, [r7, #1]
	cmp r1, r0
	beq _080D9D70
	ldrb r0, [r7, #2]
	cmp r1, r0
	beq _080D9D70
	ldrb r0, [r7, #3]
	cmp r1, r0
	beq _080D9D70
	mov r1, #0
	mov r8, r1
	b _080D9D7C
	.byte 0x00
	.byte 0x00
_080D9D4C:
	.4byte gRam
_080D9D50:
	.4byte 0x000015E2
_080D9D54:
	.4byte gUnknown_081759D8
_080D9D58:
	.4byte 0x00000ED2
_080D9D5C:
	.4byte gUnknown_081759D4
_080D9D60:
	.4byte 0x00000EE2
_080D9D64:
	.4byte gUnknown_081759D0
_080D9D68:
	.4byte 0x00000964
_080D9D6C:
	.4byte 0x000010F2
_080D9D70:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r4, r1
	lsr r4, r0, #24
	cmp r0, #0
	bge _080D9CD0
_080D9D7C:
	mov r0, r8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080D9CB4

	.byte 0x00
	.byte 0x00
