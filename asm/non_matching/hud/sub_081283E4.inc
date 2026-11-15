	THUMB_FUNC_START sub_081283E4
sub_081283E4: @ 0x081283E4
	push {r4,r5,lr}
	mov r4, #0
	ldr r2, _0812840C  @ =gRam
	ldr r1, _08128410  @ =0x00000546
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #193
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08128418
	ldr r5, _08128414  @ =0x00001AE3
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128418
	bl sub_08129D90
	b _0812848C
	.byte 0x00
	.byte 0x00
_0812840C:
	.4byte gRam
_08128410:
	.4byte 0x00000546
_08128414:
	.4byte 0x00001AE3
_08128418:
	ldr r1, _08128440  @ =0x00001B04
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812844C
	ldr r5, _08128444  @ =0x00000547
	add r0, r2, r5
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0812844C
	ldr r1, _08128448  @ =0x00001AE3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812844C
	bl sub_08129DC0
	b _0812848C
_08128440:
	.4byte 0x00001B04
_08128444:
	.4byte 0x00000547
_08128448:
	.4byte 0x00001AE3
_0812844C:
	add r3, r2, #0
	ldr r5, _0812846C  @ =0x00000547
	add r0, r3, r5
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08128474
	ldr r0, _08128470  @ =0x00001AE2
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0812848C
	mov r0, #0
	strb r0, [r1]
	b _08128490
_0812846C:
	.4byte 0x00000547
_08128470:
	.4byte 0x00001AE2
_08128474:
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0812848C
	ldr r1, _08128508  @ =0x00001AE2
	add r2, r2, r1
	ldrb r0, [r2]
	cmp r0, #1
	beq _0812848C
	mov r0, #1
	strb r0, [r2]
	mov r4, #1
_0812848C:
	cmp r4, #0
	beq _081284FA
_08128490:
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
	ldr r4, _0812850C  @ =gRam
	ldr r3, _08128510  @ =gUnknown_08180C70
	ldr r5, _08128508  @ =0x00001AE2
	add r2, r4, r5
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	add r5, r5, #6
	add r0, r4, r5
	mov r5, #0
	strb r1, [r0]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldr r2, _08128514  @ =0x00001AE9
	add r1, r4, r2
	strb r0, [r1]
	bl sub_0812740C
	mov r1, #215
	lsl r1, r1, #5
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _08128518  @ =0x00001AD2
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #18
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #30
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #6
	add r4, r4, r2
	strh r5, [r4]
	mov r2, #0
	mov r1, #207
	ldr r0, _0812851C  @ =gUnknown_0201053F
_081284F0:
	strb r2, [r0]
	sub r0, r0, #1
	sub r1, r1, #1
	cmp r1, #0
	bge _081284F0
_081284FA:
	bl sub_08129578
	mov r0, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08128508:
	.4byte 0x00001AE2
_0812850C:
	.4byte gRam
_08128510:
	.4byte gUnknown_08180C70
_08128514:
	.4byte 0x00001AE9
_08128518:
	.4byte 0x00001AD2
_0812851C:
	.4byte gUnknown_0201053F
	THUMB_FUNC_END sub_081283E4

