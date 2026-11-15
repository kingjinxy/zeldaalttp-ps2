	THUMB_FUNC_START sub_080FA83C
sub_080FA83C: @ 0x080FA83C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FA888  @ =gRam
	ldr r1, _080FA88C  @ =0x00001AE2
	add r0, r5, r1
	ldrb r6, [r0]
	cmp r6, #0
	bne _080FA89C
	mov r0, #100
	bl sub_0810EF98
	cmp r0, #0
	beq _080FA89C
	mov r1, #144
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080FA890  @ =0x00001770
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FA894  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FA898  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	b _080FA8B2
	.byte 0x00
	.byte 0x00
_080FA888:
	.4byte gRam
_080FA88C:
	.4byte 0x00001AE2
_080FA890:
	.4byte 0x00001770
_080FA894:
	.4byte 0x00000F52
_080FA898:
	.4byte 0x00000FB2
_080FA89C:
	ldr r1, _080FA8BC  @ =0x0000011F
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080FA8C0  @ =gRam
	ldr r1, _080FA8C4  @ =0x00001052
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080FA8B2:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FA8BC:
	.4byte 0x0000011F
_080FA8C0:
	.4byte gRam
_080FA8C4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080FA83C

