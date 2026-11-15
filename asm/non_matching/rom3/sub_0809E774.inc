	THUMB_FUNC_START sub_0809E774
sub_0809E774: @ 0x0809E774
	push {r4,lr}
	ldr r4, _0809E7C8  @ =gRam
	ldr r1, _0809E7CC  @ =0x00001804
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809E7C0
	sub r1, r1, #133
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #64
	beq _0809E7C0
	sub r1, r1, #3
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #224
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0809E7C0
	bl sub_0808F110
	cmp r0, #0
	beq _0809E7AE
	ldr r1, _0809E7D0  @ =0x00000978
	add r0, r4, r1
	ldrb r0, [r0]
	bl sub_0809E814
_0809E7AE:
	bl sub_0808F120
	cmp r0, #0
	beq _0809E7C0
	ldr r1, _0809E7D0  @ =0x00000978
	add r0, r4, r1
	ldrb r0, [r0]
	bl sub_0809E814
_0809E7C0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E7C8:
	.4byte gRam
_0809E7CC:
	.4byte 0x00001804
_0809E7D0:
	.4byte 0x00000978
	THUMB_FUNC_END sub_0809E774

