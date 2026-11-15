	THUMB_FUNC_START sub_080C523C
sub_080C523C: @ 0x080C523C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _080C5288  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	mov r2, #0
	strb r1, [r0]
	ldr r1, _080C528C  @ =0x00000EC6
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080C5290  @ =0x00001032
	add r0, r4, r2
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080C5282
	ldr r1, _080C5294  @ =0x00000FF2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #215
	bls _080C527C
	add r0, r0, #10
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _080C5282
_080C527C:
	add r0, r5, #0
	bl sub_080C5298
_080C5282:
	pop {r4,r5}
	pop {r0}
	bx r0
_080C5288:
	.4byte gRam
_080C528C:
	.4byte 0x00000EC6
_080C5290:
	.4byte 0x00001032
_080C5294:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C523C

