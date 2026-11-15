	THUMB_FUNC_START sub_080C018C
sub_080C018C: @ 0x080C018C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080C01F8  @ =gRam
	ldr r2, _080C01FC  @ =0x000009AD
	add r0, r1, r2
	ldrb r5, [r0]
	add r4, r1, #0
	cmp r5, #0
	bne _080C021C
	ldr r1, _080C0200  @ =0x00001844
	add r0, r4, r1
	add r2, r3, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C021C
	strb r5, [r2]
	ldr r2, _080C0204  @ =0x00000E33
	add r0, r4, r2
	add r5, r3, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080C021C
	ldr r0, _080C0208  @ =0x00000E29
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080C020C  @ =gUnknown_08171C30
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r5]
	ldrb r0, [r1]
	cmp r0, #5
	bne _080C021C
	ldr r1, _080C0210  @ =0x00000E1F
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C0214
	add r0, r3, #0
	bl sub_080AE924
	b _080C024C
	.byte 0x00
	.byte 0x00
_080C01F8:
	.4byte gRam
_080C01FC:
	.4byte 0x000009AD
_080C0200:
	.4byte 0x00001844
_080C0204:
	.4byte 0x00000E33
_080C0208:
	.4byte 0x00000E29
_080C020C:
	.4byte gUnknown_08171C30
_080C0210:
	.4byte 0x00000E1F
_080C0214:
	add r0, r3, #0
	bl sub_080C0328
	b _080C024C
_080C021C:
	ldr r2, _080C0254  @ =0x00000E29
	add r0, r4, r2
	add r5, r3, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080C024C
	ldr r1, _080C0258  @ =0x00000952
	add r0, r4, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r2, _080C025C  @ =0x00000958
	add r0, r4, r2
	mov r4, #0
	ldrsh r2, [r0, r4]
	add r0, r3, #0
	bl sub_080BF174
	ldrb r0, [r5]
	sub r0, r0, #1
	lsl r0, r0, #26
	lsr r0, r0, #24
	mov r1, #0
	bl sub_080C0260
_080C024C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C0254:
	.4byte 0x00000E29
_080C0258:
	.4byte 0x00000952
_080C025C:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080C018C

