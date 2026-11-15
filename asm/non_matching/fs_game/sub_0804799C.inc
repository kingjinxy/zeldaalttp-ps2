	THUMB_FUNC_START sub_0804799C
sub_0804799C: @ 0x0804799C
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08047A74
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	cmp r1, #128
	bls _080479D8
	mov r1, #1
	b _080479DA
_080479D8:
	mov r1, #255
_080479DA:
	add r2, r0, #0
	add r0, r0, #113
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	bl sub_0800099C
	ldr r4, [r7]
	ldr r1, _08047A54  @ =gUnknown_084287B4
	ldr r2, _08047A58  @ =gUnknown_03006C80
	ldrb r3, [r2]
	sub r2, r3, #2
	add r1, r1, r2
	ldrb r2, [r1]
	add r1, r2, #0
	bl __umodsi3
	add r2, r0, #0
	lsl r1, r2, #1
	add r2, r4, #0
	add r0, r4, #0
	add r0, r0, #115
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _08047A5C  @ =gUnknown_08137B10
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r2, #0
	add r2, r2, #112
	ldrb r1, [r2]
	ldr r2, [r0]
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08047A60
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	b _08047A74
_08047A54:
	.4byte gUnknown_084287B4
_08047A58:
	.4byte gUnknown_03006C80
_08047A5C:
	.4byte gUnknown_08137B10
_08047A60:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_08047A74:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804799C

