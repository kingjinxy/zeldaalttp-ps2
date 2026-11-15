	THUMB_FUNC_START sub_080C084C
sub_080C084C: @ 0x080C084C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080C0894  @ =gRam
	ldr r1, _080C0898  @ =0x00001844
	add r0, r2, r1
	add r3, r5, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _080C08A4
	mov r0, #1
	strb r0, [r3]
	ldr r2, _080C089C  @ =0x00000E29
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080C08A4
	ldr r3, _080C08A0  @ =0x00000E15
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	b _080C08E8
	.byte 0x00
	.byte 0x00
_080C0894:
	.4byte gRam
_080C0898:
	.4byte 0x00001844
_080C089C:
	.4byte 0x00000E29
_080C08A0:
	.4byte 0x00000E15
_080C08A4:
	ldr r1, _080C08F0  @ =0x00000952
	add r0, r4, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r3, _080C08F4  @ =0x00000958
	add r0, r4, r3
	mov r3, #0
	ldrsh r2, [r0, r3]
	add r0, r5, #0
	bl sub_080BF174
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _080C08F8  @ =0x0000096C
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080C08FC  @ =0x00000964
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080C0900  @ =0x00000E29
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, #4
	lsl r0, r0, #26
	lsr r0, r0, #24
	mov r1, #0
	bl sub_080C0260
_080C08E8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C08F0:
	.4byte 0x00000952
_080C08F4:
	.4byte 0x00000958
_080C08F8:
	.4byte 0x0000096C
_080C08FC:
	.4byte 0x00000964
_080C0900:
	.4byte 0x00000E29
	THUMB_FUNC_END sub_080C084C

