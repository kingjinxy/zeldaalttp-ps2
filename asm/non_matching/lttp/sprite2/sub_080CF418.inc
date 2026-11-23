	.ALIGN 2, 0
	.GLOBAL sub_080CF418
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF418, function
sub_080CF418:
 
	push {r4,r5,lr} 
	lsl r0, r0, #24 
	lsr r5, r0, #24 
	ldr r1, _080CF438  @ =gRam 
	ldr r2, _080CF43C  @ =0x00000FF2 
	add r0, r1, r2 
	add r4, r5, r0 
	ldrb r0, [r4] 
	cmp r0, #59 
	bne _080CF440 
	sub r2, r2, #160 
	add r0, r1, r2 
	add r0, r5, r0 
	mov r1, #3 
	strb r1, [r0] 
	b _080CF46C 
_080CF438: 
	.4byte gRam 
_080CF43C: 
	.4byte 0x00000FF2 
_080CF440: 
	ldr r2, _080CF474  @ =0x00000FA2 
	add r0, r1, r2 
	add r0, r5, r0 
	mov r1, #0 
	strb r1, [r0] 
	ldrb r4, [r4] 
	add r4, r4, #40 
	lsl r4, r4, #24 
	lsr r4, r4, #24 
	ldr r0, _080CF478  @ =gUnknown_08173034 
	add r0, r4, r0 
	ldrb r1, [r0] 
	add r0, r5, #0 
	bl sub_080CF140 
	ldr r0, _080CF47C  @ =gUnknown_08173044 
	lsl r4, r4, #2 
	add r4, r4, r0 
	ldr r1, [r4] 
	add r0, r5, #0 
	bl _call_via_r1 
_080CF46C: 
	pop {r4,r5} 
	pop {r0} 
	bx r0 
	.byte 0x00 
	.byte 0x00 
_080CF474: 
	.4byte 0x00000FA2 
_080CF478: 
	.4byte gUnknown_08173034 
_080CF47C: 
	.4byte gUnknown_08173044 
    
