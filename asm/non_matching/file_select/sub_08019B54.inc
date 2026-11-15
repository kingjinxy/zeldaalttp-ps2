	THUMB_FUNC_START sub_08019B54
sub_08019B54: @ 0x08019B54
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_0803DF84
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08019B68
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08019BB6
_08019B68:
	ldrb r0, [r4, #21]
	cmp r0, #0
	bne _08019B88
	ldr r0, _08019B84  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _08019BB6
	bl sub_0800D644
	mov r0, #1
	strb r0, [r4, #21]
	b _08019BB6
_08019B84:
	.4byte gUnknown_02000010
_08019B88:
	mov r2, #0
	ldr r0, _08019BBC  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r2, r0
	bcs _08019BB2
	ldr r5, _08019BC0  @ =gUnknown_03000940
	mov r6, #128
	lsl r6, r6, #3
	add r3, r0, #0
_08019B9A:
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08019BB6
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, r3
	bcc _08019B9A
_08019BB2:
	mov r0, #3
	strb r0, [r4, #20]
_08019BB6:
	pop {r4-r6}
	pop {r0}
	bx r0
_08019BBC:
	.4byte gUnknown_03006C80
_08019BC0:
	.4byte gUnknown_03000940
	THUMB_FUNC_END sub_08019B54

