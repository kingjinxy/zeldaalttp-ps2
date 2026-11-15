	THUMB_FUNC_START sub_08072D8C
sub_08072D8C: @ 0x08072D8C
	push {lr}
	ldr r0, _08072DB4  @ =gUnknown_02002300
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08072DDC
	ldr r2, _08072DB8  @ =gRam
	ldr r1, _08072DBC  @ =0x0000165C
	add r0, r2, r1
	ldrh r1, [r0]
	cmp r1, #0
	beq _08072DC4
	ldr r3, _08072DC0  @ =0x00000998
	add r0, r2, r3
	mov r1, #13
	strb r1, [r0]
	add r3, r3, #1
	b _08072E0A
	.byte 0x00
	.byte 0x00
_08072DB4:
	.4byte gUnknown_02002300
_08072DB8:
	.4byte gRam
_08072DBC:
	.4byte 0x0000165C
_08072DC0:
	.4byte 0x00000998
_08072DC4:
	ldr r3, _08072DD4  @ =0x00000998
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _08072DD8  @ =0x00000999
	add r1, r2, r0
	mov r0, #12
	strb r0, [r1]
	b _08072E0E
_08072DD4:
	.4byte 0x00000998
_08072DD8:
	.4byte 0x00000999
_08072DDC:
	ldr r2, _08072DF4  @ =gRam
	ldr r1, _08072DF8  @ =0x0000165C
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08072E00
	ldr r3, _08072DFC  @ =0x00000998
	add r0, r2, r3
	mov r1, #13
	strb r1, [r0]
	add r3, r3, #1
	b _08072E0A
_08072DF4:
	.4byte gRam
_08072DF8:
	.4byte 0x0000165C
_08072DFC:
	.4byte 0x00000998
_08072E00:
	ldr r1, _08072E14  @ =0x00000998
	add r0, r2, r1
	mov r1, #10
	strb r1, [r0]
	ldr r3, _08072E18  @ =0x00000999
_08072E0A:
	add r0, r2, r3
	strb r1, [r0]
_08072E0E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08072E14:
	.4byte 0x00000998
_08072E18:
	.4byte 0x00000999
	THUMB_FUNC_END sub_08072D8C

