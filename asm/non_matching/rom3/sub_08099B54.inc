	THUMB_FUNC_START sub_08099B54
sub_08099B54: @ 0x08099B54
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r6, _08099C08  @ =gRam
	ldr r0, _08099C0C  @ =0x000016CE
	add r0, r0, r6
	mov r8, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	mov r7, #3
	cmp r0, #0
	beq _08099B70
	mov r7, #2
_08099B70:
	ldr r1, _08099C10  @ =0x00001726
	add r2, r6, r1
	mov r1, #0
	strb r7, [r2]
	ldr r3, _08099C14  @ =0x00001705
	add r0, r6, r3
	strb r1, [r0]
	sub r3, r3, #56
	add r0, r6, r3
	strb r1, [r0]
	ldr r3, _08099C18  @ =0x000017E1
	add r0, r6, r3
	strb r1, [r0]
	ldr r1, _08099C1C  @ =0x000016F8
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08099BFA
	add r3, r3, #18
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08099BFA
	mov r0, #1
	strb r0, [r2]
	ldr r0, _08099C20  @ =0x000016C4
	add r4, r6, r0
	ldrh r5, [r4]
	mov r0, #4
	bl sub_0809E43C
	bl sub_0809345C
	strh r5, [r4]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r3, _08099C24  @ =0x000016D8
	add r1, r6, r3
	mov r2, #0
	ldrsh r1, [r1, r2]
	sub r0, r0, r1
	asr r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08099C28  @ =gUnknown_08167EB8
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r7, #2
	bne _08099BDE
	neg r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
_08099BDE:
	mov r3, r8
	strb r0, [r3]
	ldr r1, _08099C2C  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08099BFA
	mov r2, #161
	lsl r2, r2, #4
	add r1, r6, r2
	mov r0, #2
	strb r0, [r1]
_08099BFA:
	bl sub_08099598
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08099C08:
	.4byte gRam
_08099C0C:
	.4byte 0x000016CE
_08099C10:
	.4byte 0x00001726
_08099C14:
	.4byte 0x00001705
_08099C18:
	.4byte 0x000017E1
_08099C1C:
	.4byte 0x000016F8
_08099C20:
	.4byte 0x000016C4
_08099C24:
	.4byte 0x000016D8
_08099C28:
	.4byte gUnknown_08167EB8
_08099C2C:
	.4byte 0x000009B2
	THUMB_FUNC_END sub_08099B54

