	THUMB_FUNC_START sub_080AB5D4
sub_080AB5D4: @ 0x080AB5D4
	push {r4-r6,lr}
	ldr r0, _080AB650  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r2, r0, r1
	mov r1, #0
	strh r1, [r2]
	add r5, r0, #0
	mov r6, #128
	lsl r6, r6, #8
	add r4, r2, #0
	ldr r0, _080AB654  @ =0x0000199C
	add r2, r5, r0
	mov r3, #15
_080AB5F0:
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080AB600
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
_080AB600:
	add r2, r2, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _080AB5F0
	mov r3, #165
	lsl r3, r3, #6
	ldr r2, _080AB658  @ =0x00004E60
	add r1, r5, #0
	mov r4, #150
	lsl r4, r4, #4
	add r0, r1, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, #0
	bne _080AB622
	mov r2, #0
	mov r3, #0
_080AB622:
	ldr r0, _080AB65C  @ =gUnknown_020008F6
	ldrh r4, [r0]
	cmp r3, r4
	beq _080AB642
	strh r3, [r0]
	ldr r0, _080AB660  @ =gUnknown_02000CF6
	strh r3, [r0]
	ldr r0, _080AB664  @ =gUnknown_020008F8
	strh r2, [r0]
	ldr r0, _080AB668  @ =gUnknown_02000CF8
	strh r2, [r0]
	ldr r0, _080AB66C  @ =0x0000099B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080AB642:
	ldr r4, _080AB670  @ =0x000009B5
	add r1, r5, r4
	mov r0, #2
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080AB650:
	.4byte gRam
_080AB654:
	.4byte 0x0000199C
_080AB658:
	.4byte 0x00004E60
_080AB65C:
	.4byte gUnknown_020008F6
_080AB660:
	.4byte gUnknown_02000CF6
_080AB664:
	.4byte gUnknown_020008F8
_080AB668:
	.4byte gUnknown_02000CF8
_080AB66C:
	.4byte 0x0000099B
_080AB670:
	.4byte 0x000009B5
	THUMB_FUNC_END sub_080AB5D4

