	THUMB_FUNC_START sub_080E8808
sub_080E8808: @ 0x080E8808
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E88D4
	ldr r2, _080E88E4  @ =gRam
	ldr r1, _080E88E8  @ =0x00000F92
	add r0, r2, r1
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r3, _080E88EC  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #1
	mov r10, r2
	add r7, sp, #4
	mov r8, r7
_080E8846:
	lsl r0, r0, #24
	asr r6, r0, #24
	ldr r0, _080E88E8  @ =0x00000F92
	add r0, r0, r10
	add r0, r0, r9
	ldrb r7, [r0]
	lsl r0, r7, #1
	add r5, r6, r0
	ldr r1, _080E88F0  @ =gUnknown_081779FC
	add r0, r5, r1
	ldrb r4, [r0]
	ldr r0, _080E88F4  @ =gUnknown_08177A16
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r0, r1, #8
	orr r4, r4, r0
	mov r0, #15
	and r1, r1, r0
	cmp r1, #0
	bne _080E8880
	ldr r0, _080E88F8  @ =0x00000969
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	orr r4, r4, r0
	lsl r0, r4, #16
	lsr r4, r0, #16
_080E8880:
	ldr r0, _080E88FC  @ =gUnknown_03003E74
	mov r2, r8
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080E8900  @ =gUnknown_08177994
	lsl r3, r6, #1
	lsl r1, r7, #2
	add r3, r3, r1
	add r2, r3, r2
	ldrh r1, [r2]
	ldr r7, _080E8904  @ =gUnknown_03002B90
	ldrh r7, [r7]
	add r1, r1, r7
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E8908  @ =gUnknown_081779C8
	add r3, r3, r2
	ldrh r2, [r3]
	ldr r3, _080E890C  @ =gUnknown_03002B94
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E8910  @ =gUnknown_08177A30
	add r3, r5, r3
	ldrb r3, [r3]
	str r3, [sp]
	add r3, r4, #0
	bl sub_080C6368
	sub r1, r6, #1
	lsl r1, r1, #24
	mov r7, r8
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r0, r1, #24
	cmp r1, #0
	bge _080E8846
_080E88D4:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E88E4:
	.4byte gRam
_080E88E8:
	.4byte 0x00000F92
_080E88EC:
	.4byte 0x0000096C
_080E88F0:
	.4byte gUnknown_081779FC
_080E88F4:
	.4byte gUnknown_08177A16
_080E88F8:
	.4byte 0x00000969
_080E88FC:
	.4byte gUnknown_03003E74
_080E8900:
	.4byte gUnknown_08177994
_080E8904:
	.4byte gUnknown_03002B90
_080E8908:
	.4byte gUnknown_081779C8
_080E890C:
	.4byte gUnknown_03002B94
_080E8910:
	.4byte gUnknown_08177A30
	THUMB_FUNC_END sub_080E8808

