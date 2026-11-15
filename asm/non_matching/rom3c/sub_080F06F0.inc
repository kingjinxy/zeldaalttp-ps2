	THUMB_FUNC_START sub_080F06F0
sub_080F06F0: @ 0x080F06F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r2, _080F07F0  @ =gRam
	ldr r0, _080F07F4  @ =0x00000974
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080F07F8  @ =0x00000FA2
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #6
	bne _080F074C
	ldr r3, _080F07FC  @ =0x00000FC2
	add r0, r2, r3
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #6
	bne _080F0734
	ldr r5, _080F0800  @ =0x000009AD
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F0734
	mov r0, r8
	bl sub_080F0820
_080F0734:
	ldr r2, _080F07F0  @ =gRam
	ldr r1, _080F07FC  @ =0x00000FC2
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #4
	and r0, r0, r1
	add r0, r0, #4
	ldr r3, _080F07F4  @ =0x00000974
	add r2, r2, r3
	strb r0, [r2]
_080F074C:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F07E0
	mov r6, #3
	ldr r7, _080F07F0  @ =gRam
	ldr r5, _080F0804  @ =0x00000969
	add r5, r5, r7
	mov r10, r5
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r7
	mov r9, r0
_080F0770:
	ldr r1, _080F07F4  @ =0x00000974
	add r0, r7, r1
	ldrb r5, [r0]
	add r5, r5, r6
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080F0808  @ =gUnknown_03003E74
	sub r1, r6, #3
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080F080C  @ =gUnknown_08178CEC
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r2, r9
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F0810  @ =0x00000964
	add r3, r7, r2
	ldr r2, _080F0814  @ =gUnknown_08178CF8
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080F0818  @ =gUnknown_08178D04
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080F081C  @ =gUnknown_08178D10
	add r5, r5, r4
	ldrb r5, [r5]
	mov r12, r5
	mov r5, r10
	ldrb r4, [r5]
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	cmp r6, #0
	bge _080F0770
	mov r0, r8
	bl sub_080C6230
_080F07E0:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080F07F0:
	.4byte gRam
_080F07F4:
	.4byte 0x00000974
_080F07F8:
	.4byte 0x00000FA2
_080F07FC:
	.4byte 0x00000FC2
_080F0800:
	.4byte 0x000009AD
_080F0804:
	.4byte 0x00000969
_080F0808:
	.4byte gUnknown_03003E74
_080F080C:
	.4byte gUnknown_08178CEC
_080F0810:
	.4byte 0x00000964
_080F0814:
	.4byte gUnknown_08178CF8
_080F0818:
	.4byte gUnknown_08178D04
_080F081C:
	.4byte gUnknown_08178D10
	THUMB_FUNC_END sub_080F06F0

