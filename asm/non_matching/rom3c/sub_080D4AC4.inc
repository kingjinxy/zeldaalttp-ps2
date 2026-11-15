	THUMB_FUNC_START sub_080D4AC4
sub_080D4AC4: @ 0x080D4AC4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	lsl r1, r1, #24
	lsr r4, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	str r2, [sp]
	mov r0, #98
	mov r1, r10
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	bge _080D4AF0
	b _080D4D22
_080D4AF0:
	ldr r1, _080D4D34  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r5, r1, r0
	ldrh r0, [r5]
	sub r0, r0, #4
	strh r0, [r5]
	ldr r6, _080D4D38  @ =gUnknown_03003112
	add r2, r3, r6
	ldrb r0, [r5]
	strb r0, [r2]
	ldr r7, _080D4D3C  @ =gUnknown_03003132
	add r2, r3, r7
	ldr r6, _080D4D40  @ =gUnknown_03002B91
	ldrb r0, [r6]
	strb r0, [r2]
	ldr r7, _080D4D44  @ =0x00000964
	add r6, r1, r7
	ldrh r0, [r6]
	add r0, r0, #4
	strh r0, [r6]
	ldr r0, _080D4D48  @ =gUnknown_03003102
	add r2, r3, r0
	ldrb r0, [r6]
	strb r0, [r2]
	ldr r7, _080D4D4C  @ =gUnknown_03003122
	add r2, r3, r7
	ldr r7, _080D4D50  @ =gUnknown_03002B95
	ldrb r0, [r7]
	strb r0, [r2]
	ldr r2, _080D4D54  @ =gUnknown_03003282
	add r0, r3, r2
	mov r7, #2
	strb r7, [r0]
	ldr r2, _080D4D58  @ =gUnknown_03003192
	add r0, r3, r2
	strb r7, [r0]
	ldr r2, _080D4D5C  @ =gUnknown_03003242
	add r0, r3, r2
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080D4D60  @ =gUnknown_03003152
	add r2, r3, r0
	ldr r0, _080D4D64  @ =gUnknown_08175058
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080D4D68  @ =gUnknown_03003142
	add r2, r3, r0
	ldr r0, _080D4D6C  @ =gUnknown_08175060
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080D4D70  @ =gUnknown_030031C2
	add r2, r3, r0
	ldr r0, _080D4D74  @ =gUnknown_08175068
	add r0, r4, r0
	ldrb r0, [r0]
	mov r9, r0
	strb r0, [r2]
	ldr r0, _080D4D78  @ =gUnknown_03003352
	add r2, r3, r0
	ldr r0, _080D4D7C  @ =gUnknown_0817506C
	add r0, r4, r0
	ldrb r0, [r0]
	mov r8, r0
	strb r0, [r2]
	strb r4, [r5]
	ldr r1, _080D4D80  @ =gUnknown_030031A2
	add r0, r3, r1
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r0]
	mov r0, #98
	mov r1, r10
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	bge _080D4B92
	b _080D4D22
_080D4B92:
	ldrh r0, [r5]
	sub r0, r0, #4
	strh r0, [r5]
	ldr r0, _080D4D38  @ =gUnknown_03003112
	add r1, r3, r0
	ldrb r0, [r5]
	strb r0, [r1]
	ldr r2, _080D4D3C  @ =gUnknown_03003132
	add r1, r3, r2
	ldr r2, _080D4D40  @ =gUnknown_03002B91
	ldrb r0, [r2]
	strb r0, [r1]
	ldrh r0, [r6]
	add r0, r0, #4
	strh r0, [r6]
	ldr r0, _080D4D48  @ =gUnknown_03003102
	add r1, r3, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r2, _080D4D4C  @ =gUnknown_03003122
	add r1, r3, r2
	ldr r2, _080D4D50  @ =gUnknown_03002B95
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080D4D54  @ =gUnknown_03003282
	add r0, r3, r1
	strb r7, [r0]
	ldr r2, _080D4D58  @ =gUnknown_03003192
	add r0, r3, r2
	strb r7, [r0]
	ldr r1, _080D4D5C  @ =gUnknown_03003242
	add r0, r3, r1
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080D4D60  @ =gUnknown_03003152
	add r1, r3, r0
	ldr r0, _080D4D84  @ =gUnknown_0817505A
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080D4D68  @ =gUnknown_03003142
	add r1, r3, r2
	ldr r0, _080D4D88  @ =gUnknown_08175062
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080D4D70  @ =gUnknown_030031C2
	add r0, r3, r1
	mov r2, r9
	strb r2, [r0]
	ldr r1, _080D4D78  @ =gUnknown_03003352
	add r0, r3, r1
	mov r2, r8
	strb r2, [r0]
	strb r4, [r5]
	ldr r1, _080D4D80  @ =gUnknown_030031A2
	add r0, r3, r1
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r0]
	mov r0, #98
	mov r1, r10
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	bge _080D4C1A
	b _080D4D22
_080D4C1A:
	ldrh r0, [r5]
	sub r0, r0, #4
	strh r0, [r5]
	ldr r0, _080D4D38  @ =gUnknown_03003112
	add r1, r3, r0
	ldrb r0, [r5]
	strb r0, [r1]
	ldr r2, _080D4D3C  @ =gUnknown_03003132
	add r1, r3, r2
	ldr r2, _080D4D40  @ =gUnknown_03002B91
	ldrb r0, [r2]
	strb r0, [r1]
	ldrh r0, [r6]
	add r0, r0, #4
	strh r0, [r6]
	ldr r0, _080D4D48  @ =gUnknown_03003102
	add r1, r3, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r2, _080D4D4C  @ =gUnknown_03003122
	add r1, r3, r2
	ldr r2, _080D4D50  @ =gUnknown_03002B95
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080D4D54  @ =gUnknown_03003282
	add r0, r3, r1
	strb r7, [r0]
	ldr r2, _080D4D58  @ =gUnknown_03003192
	add r0, r3, r2
	strb r7, [r0]
	ldr r1, _080D4D5C  @ =gUnknown_03003242
	add r0, r3, r1
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080D4D60  @ =gUnknown_03003152
	add r1, r3, r0
	ldr r0, _080D4D8C  @ =gUnknown_0817505C
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080D4D68  @ =gUnknown_03003142
	add r1, r3, r2
	ldr r0, _080D4D90  @ =gUnknown_08175064
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D4D70  @ =gUnknown_030031C2
	add r1, r3, r0
	ldr r0, _080D4D94  @ =gUnknown_0817506A
	add r0, r4, r0
	ldrb r0, [r0]
	mov r9, r0
	strb r0, [r1]
	ldr r2, _080D4D78  @ =gUnknown_03003352
	add r1, r3, r2
	ldr r0, _080D4D98  @ =gUnknown_0817506E
	add r0, r4, r0
	ldrb r0, [r0]
	mov r8, r0
	strb r0, [r1]
	strb r4, [r5]
	ldr r1, _080D4D80  @ =gUnknown_030031A2
	add r0, r3, r1
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r0]
	mov r0, #98
	mov r1, r10
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	blt _080D4D22
	ldrh r0, [r5]
	sub r0, r0, #4
	strh r0, [r5]
	ldr r0, _080D4D38  @ =gUnknown_03003112
	add r1, r3, r0
	ldrb r0, [r5]
	strb r0, [r1]
	ldr r2, _080D4D3C  @ =gUnknown_03003132
	add r1, r3, r2
	ldr r2, _080D4D40  @ =gUnknown_03002B91
	ldrb r0, [r2]
	strb r0, [r1]
	ldrh r0, [r6]
	add r0, r0, #4
	strh r0, [r6]
	ldr r0, _080D4D48  @ =gUnknown_03003102
	add r1, r3, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r2, _080D4D4C  @ =gUnknown_03003122
	add r1, r3, r2
	ldr r6, _080D4D50  @ =gUnknown_03002B95
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r1, _080D4D54  @ =gUnknown_03003282
	add r0, r3, r1
	strb r7, [r0]
	ldr r2, _080D4D58  @ =gUnknown_03003192
	add r0, r3, r2
	strb r7, [r0]
	ldr r6, _080D4D5C  @ =gUnknown_03003242
	add r0, r3, r6
	mov r7, #0
	strb r7, [r0]
	ldr r0, _080D4D60  @ =gUnknown_03003152
	add r1, r3, r0
	ldr r0, _080D4D9C  @ =gUnknown_0817505E
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080D4D68  @ =gUnknown_03003142
	add r1, r3, r2
	ldr r0, _080D4DA0  @ =gUnknown_08175066
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080D4D70  @ =gUnknown_030031C2
	add r0, r3, r6
	mov r7, r9
	strb r7, [r0]
	ldr r1, _080D4D78  @ =gUnknown_03003352
	add r0, r3, r1
	mov r2, r8
	strb r2, [r0]
	ldr r6, _080D4D80  @ =gUnknown_030031A2
	add r0, r3, r6
	mov r7, sp
	ldrb r7, [r7]
	strb r7, [r0]
_080D4D22:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4D34:
	.4byte gRam
_080D4D38:
	.4byte gUnknown_03003112
_080D4D3C:
	.4byte gUnknown_03003132
_080D4D40:
	.4byte gUnknown_03002B91
_080D4D44:
	.4byte 0x00000964
_080D4D48:
	.4byte gUnknown_03003102
_080D4D4C:
	.4byte gUnknown_03003122
_080D4D50:
	.4byte gUnknown_03002B95
_080D4D54:
	.4byte gUnknown_03003282
_080D4D58:
	.4byte gUnknown_03003192
_080D4D5C:
	.4byte gUnknown_03003242
_080D4D60:
	.4byte gUnknown_03003152
_080D4D64:
	.4byte gUnknown_08175058
_080D4D68:
	.4byte gUnknown_03003142
_080D4D6C:
	.4byte gUnknown_08175060
_080D4D70:
	.4byte gUnknown_030031C2
_080D4D74:
	.4byte gUnknown_08175068
_080D4D78:
	.4byte gUnknown_03003352
_080D4D7C:
	.4byte gUnknown_0817506C
_080D4D80:
	.4byte gUnknown_030031A2
_080D4D84:
	.4byte gUnknown_0817505A
_080D4D88:
	.4byte gUnknown_08175062
_080D4D8C:
	.4byte gUnknown_0817505C
_080D4D90:
	.4byte gUnknown_08175064
_080D4D94:
	.4byte gUnknown_0817506A
_080D4D98:
	.4byte gUnknown_0817506E
_080D4D9C:
	.4byte gUnknown_0817505E
_080D4DA0:
	.4byte gUnknown_08175066
	THUMB_FUNC_END sub_080D4AC4

